/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:23:55 by avieira           #+#    #+#             */
/*   Updated: 2021/11/20 02:03:35 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *mark;

    std::cout << "---Testing low cap and upGrade 3 times" << std::endl;
	mark = new Bureaucrat("mark", 3);
    std::cout << *mark << std::endl;
    mark->upGrade();
    std::cout << *mark << std::endl;
    mark->upGrade();
    std::cout << *mark << std::endl;
    mark->upGrade();
    std::cout << *mark << std::endl;
    delete mark;

    std::cout << "---Testing high cap and downGrade 3 times" << std::endl;
    mark = new Bureaucrat("mark", 148);
    std::cout << *mark << std::endl;
    mark->downGrade();
    std::cout << *mark << std::endl;
    mark->downGrade();
    std::cout << *mark << std::endl;
    mark->downGrade();
    std::cout << *mark << std::endl;
    delete mark;

    std::cout << "---Testing GradeTooHighExeption" << std::endl;
    
    std::cout << "--Grade = 0" << std::endl;
    try 
    {
        mark = new Bureaucrat("mark", 0);
        delete mark;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    
    std::cout << "--Grade = 1" << std::endl;
    try 
    {
        mark = new Bureaucrat("mark", 1);
        delete mark;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    
    std::cout << "---Testing GradeTooLowExeption" << std::endl;
    
    std::cout << "--Grade = 151" << std::endl;
    try 
    {
        mark = new Bureaucrat("mark", 151);
        delete mark;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "--Grade = 150" << std::endl;
    try 
    {
        mark = new Bureaucrat("mark", 150);
        delete mark;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}