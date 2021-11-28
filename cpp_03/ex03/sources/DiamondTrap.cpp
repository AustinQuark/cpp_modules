/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:31:00 by avieira           #+#    #+#             */
/*   Updated: 2021/11/28 17:13:58 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    this->_name = "default name";
    this->_energyPoints = ScavTrap::getEnergyPoints();
    this->_hitpoints = FragTrap::getHitpoints();
    this->_attackDamage = FragTrap::getAttackDamage();
    std::cout << "DiamondTrap default constructor called, default name set" << std::endl;
}

DiamondTrap::~DiamondTrap()
{

    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
    this->_energyPoints = ScavTrap::getEnergyPoints();
    this->_hitpoints = FragTrap::getHitpoints();
    this->_attackDamage = FragTrap::getAttackDamage();
    std::cout << "DiamondTrap constructor called, name set" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    this->_name = diamondtrap.getName();
    this->_energyPoints = diamondtrap.getEnergyPoints();
    this->_hitpoints = diamondtrap.getHitpoints();
    this->_attackDamage = diamondtrap.getAttackDamage();
    return (*this);
}

void DiamondTrap::whoAmI(void) const
{
    std::cout << "DiamondTrap name : " << this->_name << std::endl;
    std::cout << "ClapTrap part of DiamondTrap name :" << ClapTrap::_name << std::endl;
}