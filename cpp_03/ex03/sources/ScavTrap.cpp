/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:31:40 by avieira           #+#    #+#             */
/*   Updated: 2021/11/13 13:33:21 by avieira          ###   ########.fr       */
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

ScavTrap &ScavTrap::operator=(const ClapTrap &scavtrap)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->_energyPoints = scavtrap.getEnergyPoints();
    this->_hitpoints = scavtrap.getHitpoints();
    this->_attackDamage = scavtrap.getAttackDamage();
    return(*this);
}

void ScavTrap::attack(std::string const &target) const
{
    std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void ScavTrap::guardGate(void) const
{
    std::cout << "ScavTrap " << this->_name << " entered gate keeper mode, now, no one shall pass !" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}