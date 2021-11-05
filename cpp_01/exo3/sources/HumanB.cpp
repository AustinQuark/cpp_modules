/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:29:19 by avieira           #+#    #+#             */
/*   Updated: 2021/11/05 14:28:54 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with his ";
    std::cout << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->_weapon = &weapon;
}