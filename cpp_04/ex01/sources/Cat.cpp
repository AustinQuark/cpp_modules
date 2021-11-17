/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:21:45 by avieira           #+#    #+#             */
/*   Updated: 2021/11/17 17:27:04 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = cat.getType();
    this->_brain = new Brain();
    *this->_brain = *cat.getBrain();
}

void Cat::makeSound() const
{
    std::cout << "Meow..." << std::endl;
}

Brain *Cat::getBrain(void) const
{
    return (this->_brain);
}

const Cat &Cat::operator=(const Cat &cat)
{
    this->type = cat.getType();
    *this->_brain = *cat.getBrain();
    return (*this);
}