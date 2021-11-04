/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 03:21:41 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 15:13:17 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombieHorde;
    std::string new_name;
    std::string number;

    try 
    {
        zombieHorde = new Zombie[N];
    }

    catch (const std::bad_alloc)
    {
        std::cout << "Memory allocation failed" << std::endl;
        return (NULL);
    }
    
    for (int i = 0; i < N; i++)
    {
        new_name = name;
        std::stringstream out;
        out << i;
        number = out.str();
        new_name.append(number);
        zombieHorde[i].set_name(new_name);
    }
    return (zombieHorde);
}