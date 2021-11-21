/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:23:55 by avieira           #+#    #+#             */
/*   Updated: 2021/11/21 05:29:12 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"

int main(void)
{
    Form			*form = NULL;
 	Bureaucrat		A("150", 150);
	Bureaucrat		B("1", 1);

	std::cout << std::endl;

 	form = new PresidentialPardonForm("Pardon");
	std::cout << *form << std::endl;
	
	std::cout << "---Trying to execute unsigned form" << std::endl;
 	try
 	{
 		form->execute(A);
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}

	std::cout << "---Sign form then trying to execute with grade bellow" << std::endl;
	try
 	{
 		form->beSigned(B);
		form->execute(A);
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}

	std::cout << "---Execute form" << std::endl;
	try
 	{
		form->execute(B);
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}
	
	std::cout << std::endl;
	delete form;
	std::cout << std::endl;

	form = new RobotomyRequestForm("Drill");
	std::cout << *form << std::endl;
	std::cout << "---Sign and execute form many times" << std::endl;
 	try
 	{
		form->beSigned(B);
		form->execute(B);
		form->execute(B);
		form->execute(B);
		form->execute(B);
		form->execute(B);
		form->execute(B);
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}

	std::cout << std::endl;
	delete form;
	std::cout << std::endl;

 	form = new ShrubberyCreationForm("Trees");
	std::cout << *form << std::endl;
	std::cout << "---Sign and execute form" << std::endl;
 	try
 	{
		form->beSigned(B);
		form->execute(B);
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}

	std::cout << std::endl;
	delete form;
}