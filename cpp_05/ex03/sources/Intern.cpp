/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:51:19 by avieira           #+#    #+#             */
/*   Updated: 2021/11/21 16:24:51 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(Intern const &intern)
{
    (void)intern;
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(Intern const &intern)
{
    (void)intern;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Form *Intern::makeForm(std::string const &strForm, std::string const &target)
{
    t_forms forms[] =
    {
        {"presidential pardon", new PresidentialPardonForm(target)},
        {"robotomy request", new RobotomyRequestForm(target)},
        {"shrubbery creation", new ShrubberyCreationForm(target)},
        {"", NULL}
    };
    Form *found = NULL;

    for (int i = 0; forms[i].form; i++)
    {
        if (forms[i].strForm == strForm)
            found = forms[i].form;
        else
            delete forms[i].form;
    }
    if (found)
        std::cout << "Intern creates " << found->getName() << std::endl;
    else
        std::cout << "Intern can't find specified form" << std::endl;
    return(found);    
}