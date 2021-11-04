/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 02:09:51 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 15:08:25 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "<" << this->name << ">" << " I'm dead";
    std::cout << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
}

void Zombie::announce(void) const
{
    std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}