/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:21:45 by avieira           #+#    #+#             */
/*   Updated: 2021/11/17 16:56:45 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = dog.getType();
    this->_brain = new Brain();
    *this->_brain = *dog.getBrain();
}

void Dog::makeSound() const
{
    std::cout << "Woof !" << std::endl;
}

Brain *Dog::getBrain(void) const
{
    return (this->_brain);
}

const Dog &Dog::operator=(const Dog &dog)
{
    this->type = dog.getType();
    this->_brain = dog.getBrain();
    return (*this);
}