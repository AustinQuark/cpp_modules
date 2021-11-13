/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:31:40 by avieira           #+#    #+#             */
/*   Updated: 2021/11/13 13:54:54 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_energyPoints = 100;
    this->_hitpoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap default constructor called, default name set" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_energyPoints = 100;
    this->_hitpoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called, name set" << std::endl;
}

FragTrap::FragTrap(const FragTrap &scavtrap)
{
    std::cout << "FragTrap copy constructor called, name set" << std::endl;
    *this = scavtrap;
}

FragTrap &FragTrap::operator=(const ClapTrap &scavtrap)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->_energyPoints = scavtrap.getEnergyPoints();
    this->_hitpoints = scavtrap.getHitpoints();
    this->_attackDamage = scavtrap.getAttackDamage();
    return(*this);
}

void FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap " << this->_name << " wanna high five, would you accept it guys ?" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}