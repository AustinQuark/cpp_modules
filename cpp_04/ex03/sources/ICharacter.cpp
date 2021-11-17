/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:29:24 by avieira           #+#    #+#             */
/*   Updated: 2021/11/17 21:53:00 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ICharacter.hpp"

ICharacter::~ICharacter()
{
    std::cout << "ICharacter destructor called" << std::endl;
}

ICharacter::ICharacter() : _name("null")
{
    std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(const std::string &name) : _name(name)
{
    std::cout << "ICharacter constructor called" << std::endl;
}

std::string const &ICharacter::getName(void) const
{
    return (this->_name);
}

void ICharacter::equip(AMateria *m)
{
    if (this->_nbOfMateria < 4 && m)
    {
        this->_materia[_nbOfMateria] = m;
        this->_nbOfMateria++;
    }
}

void ICharacter::unequip(int idx)
{
    if (idx >= this->_nbOfMateria)
        return ;
    this->_materia[idx] = NULL;
    for (int i = idx; i < this->_nbOfMateria - 1; i++)
    {
        this->_materia[i] = this->_materia[i + 1];
        this->_materia[i + 1] = NULL;
    }
    this->_nbOfMateria--;
}

void ICharacter::use(int idx, ICharacter &target)
{
    if (idx >= this->_nbOfMateria)
        return ;
    this->_materia[idx].use(target);
}