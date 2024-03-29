/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:00:25 by avieira           #+#    #+#             */
/*   Updated: 2021/11/09 22:31:46 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

Fixed::Fixed() : _fixedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _fixedValue(fixed._fixedValue)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _fixedValue(value << _fracBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fixedValue(roundf(value * _shiftBits))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this->_fixedValue == fixed._fixedValue)
        return (*this);
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedValue = fixed._fixedValue;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedValue = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_fixedValue / (float)_shiftBits);
}

int Fixed::toInt(void) const
{
    return (this->_fixedValue >> _fracBits);
}

Fixed::~Fixed()
{
    std::cout << "Destrutor called" << std::endl;
}

int Fixed::getShiftBits() const
{
    return (this->_shiftBits);
}

std::ostream &operator<<(std::ostream &output, Fixed const &fixed)
{
    output << (float)fixed.getRawBits() / (float)fixed.getShiftBits();
    return (output);
}