/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:28:34 by avieira           #+#    #+#             */
/*   Updated: 2021/11/19 13:33:20 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
    AMateria *new_cure = new Cure();
    return (new_cure);
}

void Cure::use(ICharacter &target)
{
    std::cout <<  "* heals " << target.getName() << " wounds *" << std::endl;
}