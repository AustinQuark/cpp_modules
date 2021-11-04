/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 03:28:18 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 04:32:01 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

#include <cstdlib>

int main(int ac, char **av)
{
    int N = 0;

    if (av[1])
        N = std::atoi(av[1]);
    if (ac != 2 || N <= 0)
    {
        std::cout << "Enter the size of the horde ./zombie [size_of_the_horde]" << std::endl;
        return (0); 
    }
    Zombie *horde = zombieHorde(N, "jeff");
    for (int i = 0; i < N && horde; i++)
        horde[i].announce();
    delete [] horde;
    
    
}