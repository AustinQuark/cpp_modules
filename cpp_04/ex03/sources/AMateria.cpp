/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:00:22 by avieira           #+#    #+#             */
/*   Updated: 2021/11/19 20:00:02 by avieira          ###   ########.fr       */
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

void AMateria::use(ICharacter &target)
{
    (void)target;
}