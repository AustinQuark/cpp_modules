/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 23:46:00 by avieira           #+#    #+#             */
/*   Updated: 2021/11/20 21:50:35 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrate"), _grade(Bureaucrat::_highestGrade)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < Bureaucrat::_highestGrade)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > Bureaucrat::_lowestGrade)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat.getName())
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    std::cout << "Bureaucrat assigment operator called" << std::endl;
    this->_grade = bureaucrat.getGrade();
    return(*this);
}

std::string const &Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::upGrade()
{
    if (this->_grade == Bureaucrat::_highestGrade)
        return;
    this->_grade--;
}

void Bureaucrat::downGrade()
{
    if (this->_grade == Bureaucrat::_lowestGrade)
        return;
    this->_grade++;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signs form " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " cannot sign form " << form.getName() << " because : " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.canExecute(*this);
        std::cout << this->_name << " executes " << form.getName() << std::endl;
        form.execute();
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " cannot executes " << form.getName() << " because : " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low.");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (os);
}