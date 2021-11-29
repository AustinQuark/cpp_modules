/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:21:45 by avieira           #+#    #+#             */
/*   Updated: 2021/11/29 15:29:30 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal()
{
    *this = dog;
}

void Dog::makeSound() const
{
    std::cout << "Woof !" << std::endl;
}


const Dog &Dog::operator=(const Animal &animal)
{
    this->type = animal.getType();
    return (*this);
}