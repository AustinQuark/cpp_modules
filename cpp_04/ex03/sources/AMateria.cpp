/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:00:22 by avieira           #+#    #+#             */
/*   Updated: 2021/11/17 21:27:44 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

AMateria::AMateria() : _type("null")
{
    std::cout << "Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &amateria)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = amateria;
}

AMateria &AMateria::operator=(const AMateria &amateria)
{
    //this->_type = amateria.getType();
    return (*this);
}

AMateria *AMateria::clone(void) const
{
    AMateria *newAMateria = new AMateria(*this);
    return (newAMateria);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

