/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 02:09:51 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 15:14:05 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "<" << this->name << ">" << " I'm dead";
    std::cout << std::endl;
}

Zombie::Zombie()
{
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}