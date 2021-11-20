/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:23:55 by avieira           #+#    #+#             */
/*   Updated: 2021/11/20 21:53:54 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"

int main(void)
{
    	Form			*form = NULL;
 	Bureaucrat		bob("bob", 1);
 	Bureaucrat		phil("phil", 40);
 	Bureaucrat		luc("luc", 150);
 
 	try
 	{
 		form = new PresidentialPardonForm("28Z");
 		form->execute(bob);
 		delete form;
 		form = NULL;
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 
 	try
 	{
 		form = new PresidentialPardonForm("28A");
 		form->beSigned(bob);
 		form->execute(bob);
 		delete form;
 		form = NULL;
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 
 
 	try
 	{
 		form = new RobotomyRequestForm("28B");
 		form->beSigned(bob);
 		form->execute(phil);
 		form->execute(phil);
 		form->execute(phil);
 		form->execute(phil);
 		form->execute(phil);
 		form->execute(phil);
 		form->execute(phil);
 		form->execute(phil);
 		form->execute(phil);
 		delete form;
 		form = NULL;
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 
 
 	try
 	{
 		form = new ShrubberyCreationForm("28C");
 		form->beSigned(bob);
 		form->execute(phil);
 		form->execute(luc);
 		delete form;
 		form = NULL;
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 
 	return 0;
}