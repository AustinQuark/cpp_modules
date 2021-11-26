/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:23:10 by avieira           #+#    #+#             */
/*   Updated: 2021/11/26 02:46:39 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Conversion.hpp"

Conversion::Conversion() : _input("0"), _typeInput(none)
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

void Conversion::convertInput()
{
    void *speValue = NULL;

    this->defineType();
    switch (this->_typeInput)
    {
        case Int:    this->intValue = static_cast<int>(strtod(this->_input.c_str(), NULL));
                     speValue = &this->intValue;
                     break;
        case Float:  this->floatValue = static_cast<float>(strtod(this->_input.c_str(), NULL));
                     speValue = &this->floatValue;
                     break;
        case Double: this->doubleValue = strtod(this->_input.c_str(), NULL);
                     speValue = &this->doubleValue;
                     break;
        case Char:   break;
        case none:   break;
        case invalid: break;
    }
    if (!speValue)
        return;
    this->setScalarValues(speValue);
}

std::string::iterator loopThroughtDigits(std::string::iterator it)
{
    while (isdigit(*(it + 1)))
        it++;
    return (it);
}

void Conversion::defineType()
{
    bool point = false;
    bool exponent = false;
    bool f = false;
    bool digits = false;
    
    //Loop throught input checking if invalid and characters meet
    for (std::string::iterator it = this->_input.begin(); it < this->_input.end() && this->_typeInput != invalid; it++)
    {
        if (isdigit(*it))
        {
            if (f)
                this->_typeInput = invalid;
            else
                digits = true;
            it = loopThroughtDigits(it);
            if (*(it + 1) == '+' || *(it + 1) == '-')
                this->_typeInput = invalid;
        }
        else if (*it == '.')
        {
            if (point || exponent || f || (!isdigit(*(it + 1)) && !digits))
                this->_typeInput = invalid;
            else
                point = true;
        }
        else if (*it == 'e' || *it == 'E')
        {
            if (exponent || f || (!isdigit(*(it + 1)) && (*(it + 1) != '-' && *(it + 1) != '+')))
                this->_typeInput = invalid;
            else   
                exponent = true;
        }
        else if (*it == 'f' || *it == 'F')
        {
            if (f)
                this->_typeInput = invalid;
            else   
                f = true;
        }
        else if (*it == '-' || *it == '+')
        {
            if (!isdigit(*(it + 1)))
                this->_typeInput = invalid;
        }
        else if (it != this->_input.end())
            this->_typeInput = invalid;
    }

    //Define type depending on characters meet
    if (this->_typeInput == none)
    {
        if (digits)
        {
            this->_typeInput = Int;
            if (point || exponent)
                this->_typeInput = Double;
            if (f)
                this->_typeInput = Float;
        }
    }
    else if (this->_typeInput == invalid) //Special cases
    {
        std::string specials[6] = {"+inf", "-inf", "nan", "+inff", "-inff", "nanf"};
        for (unsigned int i = 0; i < 6; i++)
        {
            if (this->_input == specials[i])
            {
                if (i < 3)
                    this->_typeInput = Double;
                else
                    this->_typeInput = Float;
            }
        }
    }
}

void Conversion::setScalarValues(void *speValue)
{
    this->charValue = static_cast<char>(*speValue);
    this->intValue = static_cast<int>(*speValue);
    this->floatValue = static_cast<float>(*speValue);
    this->doubleValue = static_cast<double>(*speValue);
}

std::string Conversion::getType() const
{
    std::string type[6] = {"char", "int", "float", "double", "none", "invalid"};
    return (type[this->_typeInput]);
}

void Conversion::displayResult() const
{
    std::cout << "char : " << this->charValue << std::endl;
    std::cout << "int : " << this->intValue << std::endl;
    std::cout << "float : " << this->floatValue << std::endl;
    std::cout << "double : " << this->doubleValue << std::endl;
}