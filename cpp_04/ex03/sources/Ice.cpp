/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:28:34 by avieira           #+#    #+#             */
/*   Updated: 2021/11/19 19:11:58 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
    AMateria *new_ice = new Ice();
    return (new_ice);
}

void Ice::use(ICharacter &target)
{
    std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}