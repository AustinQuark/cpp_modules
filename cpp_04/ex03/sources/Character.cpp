/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:29:24 by avieira           #+#    #+#             */
/*   Updated: 2021/11/19 15:50:54 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Character.hpp"

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < this->_nbOfMateria; i++)
    {
        if (this->_materias[i])
        {
            delete this->_materias[i];
            this->_materias[i] = NULL;
        }
    }
}

Character::Character(const Character &character)
{
    std::cout << "Character copy constructor called" << std::endl;
    *this = character;
}

Character &Character::operator=(const Character &character)
{
    for (int i = 0; i < this->_nbOfMateria; i++)
    {
        if (this->_materias[i])
        {
            delete this->_materias[i];
            this->_materias[i] = NULL;
        }
    }
    for (int i = 0; i < character._nbOfMateria; i++)
        this->_materias[i] = character._materias[i]->clone();
    this->_name = character._name;
    this->_nbOfMateria = character._nbOfMateria;
    return (*this);
}

Character::Character(const std::string &name) : _nbOfMateria(0), _name(name)
{
    std::cout << "Character constructor called" << std::endl;
}

std::string const &Character::getName(void) const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    if (this->_nbOfMateria < 4 && m)
    {
        this->_materias[_nbOfMateria] = m;
        this->_nbOfMateria++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= this->_nbOfMateria)
        return ;
    this->_materias[idx] = NULL;
    for (int i = idx; i < this->_nbOfMateria - 1; i++)
    {
        this->_materias[i] = this->_materias[i + 1];
        this->_materias[i + 1] = NULL;
    }
    this->_nbOfMateria--;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= this->_nbOfMateria)
        return ;
    this->_materias[idx]->use(target);
}