/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:32:04 by avieira           #+#    #+#             */
/*   Updated: 2021/11/20 19:51:08 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("default", 72, 45)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : Form("RobotomyRequestForm", 72, 45)
{
    this->_target = form.getTarget();
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &form)
{
    this->_target = form.getTarget();
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

std::string const &RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

void RobotomyRequestForm::action() const
{
    std::cout << "RiiiiiiizzZZZ..." << std::endl;
    std::cout << this->_target;
    if (rand() % 2)
        std::cout << " robotomization successfull";
    else
        std::cout << " robotomization failure";
    std::cout << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
    this->canExecute(executor);
    this->action();
}