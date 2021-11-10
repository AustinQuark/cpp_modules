/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:41:22 by avieira           #+#    #+#             */
/*   Updated: 2021/11/10 16:30:29 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called, default name set" << std::endl;
    this->_name = "default_name";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor called, name set" << std::endl; 
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage ! " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " repair himself by " << amount << " points !" << std::endl;
}

std::string ClapTrap::getName() const
{
    return (this->_name);
}

int ClapTrap::getHitpoints() const
{
    return (this->_hitpoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage() const
{
    return (this->_attackDamage);
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_name = claptrap.getName();
    this->_hitpoints = claptrap.getHitpoints();
    this->_energyPoints = claptrap.getEnergyPoints();
    this->_attackDamage = claptrap.getAttackDamage();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_name = claptrap.getName();
    this->_hitpoints = claptrap.getHitpoints();
    this->_energyPoints = claptrap.getEnergyPoints();
    this->_attackDamage = claptrap.getAttackDamage();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}