/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:23:10 by avieira           #+#    #+#             */
/*   Updated: 2021/11/24 15:09:52 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Conversion.hpp"

Conversion::Conversion() : _typeInput(none)
{

}

Conversion::Conversion(std::string &input) : _input(input), _typeInput(none)
{

}

Conversion::Conversion(Conversion const &conversion)
{
    this->_input = conversion.getInput();
    this->_input = conversion.getTypeInput();
}

Conversion &Conversion::operator=(Conversion const &conversion)
{
    this->_input = conversion.getInput();
    this->_input = conversion.getTypeInput();
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

void Conversion::defineType()
{
    this->_typeInput = none;

    if (this->_input.find_first_of("0123456789") != std::string::npos)
    {
        this->_typeInput = Int;
        if (this->_input.find_first_of(".") != std::string::npos)
            this->_typeInput = Double;
        if (this->_input.find_first_of("f") != std::string::npos)
            this->_typeInput = Float;
    }
}

t_type Conversion::getTypeInput() const
{
    return (this->_typeInput);
}