/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:23:55 by avieira           #+#    #+#             */
/*   Updated: 2021/11/20 18:34:17 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"

int main(void)
{
    std::cout << "---Testing Wrong Forms Creation" << std::endl;
    try
 	{
 		Form form("FormSignTooHigh", 0, 1);
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 
 	try
 	{
 		Form	form("FormExecTooHigh", 1, 0);
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 
 	try
 	{
 		Form	form("FormExecTooLow", 1, 151);
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	} 
 
 	try
 	{
 		Form	form("FormSignTooLow", 151, 1);
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}

 	std::cout << std::endl;
 	std::cout << std::endl;
 	std::cout << std::endl;
 
 	try
 	{
 		Bureaucrat	max = Bureaucrat("Grade 1", 1);
 		Form		form("FormLowestGrades", 150, 150);
 
 		std::cout << form << std::endl;
 		max.signForm(form);
 		std::cout << form << std::endl;
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 	std::cout << std::endl;
 
 	try
 	{
 		Bureaucrat	tenten = Bureaucrat("Grade 20", 20);
 		Form		form("FormHighestGrades", 1, 1);
 
 		std::cout << form << std::endl;
 		tenten.signForm(form);
 		std::cout << form << std::endl;
 	}
 	catch (std::exception &e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 
 	return 0;
}