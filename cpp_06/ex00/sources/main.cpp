/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:19:13 by avieira           #+#    #+#             */
/*   Updated: 2021/11/26 20:12:13 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Conversion.hpp"

void conversion(std::string input)
{
    Conversion a(input);

    a.convertInput();
}

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Enter one and only one argument" << std::endl;
    else
        conversion(av[1]);
}