/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:29:19 by avieira           #+#    #+#             */
/*   Updated: 2021/11/05 14:34:30 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

void HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with his ";
    std::cout << this->_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->_weapon = weapon;
}