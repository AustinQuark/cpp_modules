/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:29:19 by avieira           #+#    #+#             */
/*   Updated: 2021/11/05 14:44:27 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
}

void HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with his ";
    if (this->_weapon)
        std::cout << this->_weapon->getType() << std::endl;
    else
        std::cout << "NULL weapon" << std::endl;
    
}   

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}