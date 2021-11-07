/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:44:22 by avieira           #+#    #+#             */
/*   Updated: 2021/11/07 05:48:34 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Karen.hpp"

int main(void)
{
    Karen karen;
    
    std::cout << "Pass complains" << std::endl;
    std::cout << "DEBUG LEVEL : ";
    karen.complain("DEBUG");
    std::cout << "INFO LEVEL : ";
    karen.complain("INFO");
    std::cout << "WARNING LEVEL : ";
    karen.complain("WARNING");
    std::cout << "ERROR LEVEL : ";
    karen.complain("ERROR");

    std::cout << std::endl << "No-pass complains" << std::endl;
    std::cout << "debug LEVEL : ";
    karen.complain("debug");
    std::cout << std::endl << "42 LEVEL : ";
    karen.complain("42");
    std::cout << std::endl << "[empty] LEVEL : ";
    karen.complain("");
    std::cout << std::endl;
}