/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:00:25 by avieira           #+#    #+#             */
/*   Updated: 2021/11/09 22:55:59 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Fixed.hpp"

Fixed::Fixed() : _fixedValue(0)
{
}

Fixed::Fixed(const Fixed &fixed) : _fixedValue(fixed._fixedValue)
{
}

Fixed::Fixed(const int value) : _fixedValue(value << _fracBits)
{
}

Fixed::Fixed(const float value) : _fixedValue(roundf(value * _shiftBits))
{
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    if (this->_fixedValue == fixed._fixedValue)
        return (*this);
    this->_fixedValue = fixed._fixedValue;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedValue);
}

void Fixed::setRawBits(int const raw)
{
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

bool Fixed::operator>(Fixed const &cmp) const
{
    return (this->getRawBits() > cmp.getRawBits());
}

bool Fixed::operator<(Fixed const &cmp) const
{
    return (this->getRawBits() < cmp.getRawBits());
}

bool Fixed::operator>=(Fixed const &cmp) const
{
    return (this->getRawBits() >= cmp.getRawBits());
}

bool Fixed::operator<=(Fixed const &cmp) const
{
    return (this->getRawBits() <= cmp.getRawBits());
}

bool Fixed::operator==(Fixed const &cmp) const
{
    return (this->getRawBits() == cmp.getRawBits());
}

bool Fixed::operator!=(Fixed const &cmp) const
{
    return (this->getRawBits() != cmp.getRawBits());
}

Fixed Fixed::operator+(Fixed const &add) const
{
    Fixed result;

    result.setRawBits(this->getRawBits() + add.getRawBits());
    return (result);
}

Fixed Fixed::operator-(Fixed const &sub) const
{
    Fixed result;

    result.setRawBits(this->_fixedValue - sub.getRawBits());
    return (result);
}

Fixed Fixed::operator*(Fixed const &times) const
{
    Fixed result;

    result.setRawBits((float)this->_fixedValue * (float)times.getRawBits() / (float)this->_shiftBits);
    return (result);
}


Fixed Fixed::operator/(Fixed const &div) const
{
    Fixed result;

    result.setRawBits((float)this->_fixedValue / (float)div.getRawBits() * (float)this->_shiftBits);
    return (result);
}

Fixed Fixed::operator++(int)
{
    Fixed oldFixed;

    oldFixed.setRawBits(this->_fixedValue);
    this->_fixedValue += 1;
    return (oldFixed);
}

Fixed Fixed::operator--(int)
{
    Fixed oldFixed;

    oldFixed.setRawBits(this->_fixedValue);
    this->_fixedValue -= 1;
    return (oldFixed);
}

Fixed &Fixed::operator++()
{
    this->_fixedValue += 1;
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->_fixedValue -= 1;
    return (*this);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

Fixed::~Fixed()
{
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