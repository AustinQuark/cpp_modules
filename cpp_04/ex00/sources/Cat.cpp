/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:21:45 by avieira           #+#    #+#             */
/*   Updated: 2021/11/29 15:28:55 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal()
{
    *this = cat;
}

void Cat::makeSound() const
{
    std::cout << "Meow..." << std::endl;
}

const Cat &Cat::operator=(const Animal &animal)
{
    this->type = animal.getType();
    return (*this);
}