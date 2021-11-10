/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:31:40 by avieira           #+#    #+#             */
/*   Updated: 2021/11/10 19:15:21 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_energyPoints = 50;
    this->_hitpoints = 100;
    this->_attackDamage = 20;
    std::cout << "ScavTrap default constructor called, default name set" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_energyPoints = 50;
    this->_hitpoints = 100;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called, name set" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
    std::cout << "ScavTrap copy constructor called, name set" << std::endl;
    *this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->_energyPoints = scavtrap.getEnergyPoints();
    this->_hitpoints = scavtrap.getHitpoints();
    this->_attackDamage = scavtrap.getAttackDamage();
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
    ClapTrap::~ClapTrap();
}