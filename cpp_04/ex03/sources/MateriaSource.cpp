/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:39:06 by avieira           #+#    #+#             */
/*   Updated: 2021/11/19 19:48:20 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/MateriaSource.hpp"

MateriaSource::MateriaSource() : _stored(0)
{
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < this->_stored; i++)
        if (this->_store[i])
            delete this->_store[i];
}

void MateriaSource::learnMateria(AMateria *amateria)
{
    if (this->_stored >= 4)
        return ;
    AMateria *to_store = amateria->clone();
    this->_store[this->_stored] = to_store;
    this->_stored++;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < this->_stored; i++)
    {
        if (this->_store[i]->getType() == type)
        {
            AMateria *to_create = this->_store[i]->clone();
            return (to_create);
        }
    }
    return (NULL);
}

