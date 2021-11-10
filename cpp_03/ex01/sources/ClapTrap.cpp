/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:41:22 by avieira           #+#    #+#             */
/*   Updated: 2021/11/10 19:03:47 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called, default name set" << std::endl;
    this->_name = "default_name";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called, name set" << std::endl; 
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitpoints > 0)
        std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage ! " << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " aleready KO." << std::endl;
    this->_hitpoints -= amount;
    if (this->_hitpoints <= 0)
        std::cout << "ClapTrap " << this->_name << " KOed because he has no hitpoints left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    unsigned int repair;
    
    repair = amount;
    if ((unsigned int)this->_energyPoints < amount)
    {
        repair = this->_energyPoints;
        this->_energyPoints = 0;
    }
    else
        this->_energyPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " repair himself by " << repair << " points !" << std::endl;
    std::cout << "ClapTrap " << this->_name << " has " << this->_energyPoints << " energy points left." << std::endl;
}

const std::string &ClapTrap::getName() const
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
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->_name = claptrap.getName();
    this->_hitpoints = claptrap.getHitpoints();
    this->_energyPoints = claptrap.getEnergyPoints();
    this->_attackDamage = claptrap.getAttackDamage();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}