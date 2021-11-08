/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:44:22 by avieira           #+#    #+#             */
/*   Updated: 2021/11/08 14:37:35 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Karen.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Bad argument, launch ./karenFilter FILTER" << std::endl;
        return (0);
    }
    Karen karen(av[1]);
    
    karen.complain("DEBUG");
    karen.complain("INFO");
    karen.complain("WARNING");
    karen.complain("ERROR");
    karen.complain("42");
    karen.complain("");
}