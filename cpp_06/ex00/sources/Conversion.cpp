/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:23:10 by avieira           #+#    #+#             */
/*   Updated: 2021/11/24 20:58:51 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Conversion.hpp"

Conversion::Conversion() : _input("0")
{

}

Conversion::Conversion(std::string &input) : _input(input), _typeInput(none)
{

}

Conversion::Conversion(Conversion const &conversion)
{
    this->_input = conversion.getInput();
}

Conversion &Conversion::operator=(Conversion const &conversion)
{
    this->_input = conversion.getInput();
    return (*this);
}

Conversion::~Conversion()
{

}

void Conversion::setInput(std::string &input)
{
    this->_input = input;
}

std::string const &Conversion::getInput() const
{
    return (this->_input);
}

void Conversion::evalCharacter(char c) const
{
    static int digit = 0;
    static bool f = false;
    static bool sign = false;
    static bool exponent = false;
    static bool point = false;

    if (c == '+' || c == '-')
    {
        if (sign)
            this->_typeInput = invalid;
        else
            sign = true;
    }
    if (isdigit(c))
    {
        if (digit == 0 && exponent)
            this->_typeInput = invalid;
        else if (digit == 0)
            digit++;
        else if (point)
        {
            digit++;
            point = false;
        }   
    }
    if (c == '.')
        point = true;
    
}

t_type Conversion::defineType()
{
    for (unsigned int i = 0; this->_input[i] && this->_typeInput != invalid; i++)
        this->evalCharacter(this->_input[i]);
}