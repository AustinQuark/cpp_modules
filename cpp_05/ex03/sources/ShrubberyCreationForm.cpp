/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:32:04 by avieira           #+#    #+#             */
/*   Updated: 2021/11/20 19:51:08 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("default", 145, 137)
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : Form("ShrubberyCreationForm", 145, 137)
{
    this->_target = form.getTarget();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &form)
{
    this->_target = form.getTarget();
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string const &ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void ShrubberyCreationForm::action() const
{
    std::ofstream file;
    std::string strFile = this->_target + "_shrubbery";

    try
    {
        file.open(strFile.c_str());
        file << TREES;
        file.close();
    }
    catch (std::ofstream::failure &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    this->canExecute(executor);
    this->action();
}