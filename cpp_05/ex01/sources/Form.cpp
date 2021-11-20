/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:03:34 by avieira           #+#    #+#             */
/*   Updated: 2021/11/20 18:34:44 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Form.hpp"

Form::Form() : _name("default"), _gradeSign(150), _gradeExec(150), _signed(false)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const &name, int const gradeSign, int const gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false)
{
    std::cout << "Form constructor called" << std::endl;
    if (gradeSign > Form::_lowestGrade || gradeExec > Form::_lowestGrade)
        throw Form::GradeTooLowException();
    if (gradeSign < Form::_highestGrade || gradeExec < Form::_highestGrade)
        throw Form::GradeTooHighException();
}

Form::Form(const Form &form) : _name(form.getName()), _gradeSign(form.getGradeSign()), _gradeExec(form.getGradeExec()), _signed(form.getSigned())
{

}

Form &Form::operator=(const Form &form)
{
    this->_signed = form.getSigned();
    return (*this);
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string const &Form::getName() const
{
    return (this->_name);
}

int Form::getGradeSign() const
{
    return (this->_gradeSign);
}

int Form::getGradeExec() const
{
    return (this->_gradeExec);
}

bool Form::getSigned() const
{
    return (this->_signed);
}

Form &Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
    return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << "-----Form " << form.getName() << "-----" << std::endl;
    os << "Grade to be signed : " << form.getGradeSign() << std::endl;
    os << "Grade to be executed : " << form.getGradeSign() << std::endl;
    os << "Status : ";
    if (form.getSigned())
        os << "signed";
    else
        os << "unsigned";
    os << std::endl;
    return (os);
}