/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:23:55 by avieira           #+#    #+#             */
/*   Updated: 2021/11/21 16:35:29 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/Intern.hpp"

int main(void)
{
    Intern		intern;
	Form		*form;
	Bureaucrat	boss("boss", 1);

	std::cout << "---Form : bloop is unknown" << std::endl;
	std::cout << "-----Makeform Loop-----" << std::endl;
	form = intern.makeForm("bloop is unknown", "bloop");
	std::cout << "-----------------------" << std::endl;
	if (form)
		delete form;
	std::cout << "---Form : \"[empty]\"" << std::endl;
	std::cout << "-----Makeform Loop-----" << std::endl;
	form = intern.makeForm("", "null");
	std::cout << "-----------------------" << std::endl;
	if (form)
		delete form;
	
	std::cout << "---Form : ShrubberyCreationForm" << std::endl;
	std::cout << "-----Makeform Loop-----" << std::endl;
	form = intern.makeForm("shrubbery creation", "windows 42");
	std::cout << "-----------------------" << std::endl;

	if (form)
	{	
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
	}
}