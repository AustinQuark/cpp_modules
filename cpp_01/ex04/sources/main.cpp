/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 01:03:18 by avieira           #+#    #+#             */
/*   Updated: 2021/11/06 01:59:25 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Wrong number of arguments, launch with ./sed FILENAME s1 s2" << std::endl;
        return (0);
    }
    Sed sed(av[1], av[2], av[3]);
    sed.sedFile();
}