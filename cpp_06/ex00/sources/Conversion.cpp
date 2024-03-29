/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:23:10 by avieira           #+#    #+#             */
/*   Updated: 2021/11/28 18:10:07 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Conversion.hpp"

Conversion::Conversion() : _input("0"), _typeInput(none)
{
    this->charValue = '\0';
    this->intValue = 0;
    this->floatValue = 0.0f;
    this->doubleValue = 0.0;

    this->oorFloat = false;
    this->oorInt = false;
    this->oorDouble = false;
}

Conversion::Conversion(std::string &input) : _input(input), _typeInput(none)
{
    this->charValue = '\0';
    this->intValue = 0;
    this->floatValue = 0.0f;
    this->doubleValue = 0.0;

    this->oorFloat = false;
    this->oorInt = false;
    this->oorDouble = false;
}

Conversion::Conversion(Conversion const &conversion)
{
    this->_input = conversion.getInput();
    this->_typeInput = conversion.getEnumType();

    this->charValue = '\0';
    this->intValue = 0;
    this->floatValue = 0.0f;
    this->doubleValue = 0.0;

    this->oorFloat = false;
    this->oorInt = false;
    this->oorDouble = false;
}

Conversion &Conversion::operator=(Conversion const &conversion)
{
    this->_input = conversion.getInput();
    this->_typeInput = conversion.getEnumType();

    this->charValue = '\0';
    this->intValue = 0;
    this->floatValue = 0.0f;
    this->doubleValue = 0.0;

    this->oorFloat = false;
    this->oorInt = false;
    this->oorDouble = false;
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

std::string Conversion::getType() const
{
    std::string type[6] = {"char", "int", "float", "double", "none", "invalid"};
    return (type[this->_typeInput]);
}

t_type Conversion::getEnumType() const
{
    return (this->_typeInput);
}

void Conversion::convertInput()
{
    this->defineType();
    if (this->_typeInput == invalid || this->_typeInput == none)
        std::cout << "Input is invalid" << std::endl;
    else
    {
        this->acquireValue();
        this->displayResult();
    }
}

size_t Conversion::loopThroughtDigits(size_t i)
{
    while (isdigit(this->_input[i + 1]))
        i++;
    return (i);
}

void Conversion::defineType()
{
    bool point = false;
    bool exponent = false;
    bool f = false;
    bool digits = false;
    
    //Loop throught input checking if invalid and characters meet
    for (size_t i = 0; i < this->_input.length() && this->_typeInput != invalid; i++)
    {
        if (isdigit(this->_input[i]))
        {
            if (f)
                this->_typeInput = invalid;
            else
                digits = true;
            i = this->loopThroughtDigits(i);
            if (this->_input[i + 1] == '+' || this->_input[i + 1] == '-')
                this->_typeInput = invalid;
        }
        else if (this->_input[i] == '.')
        {
            if (point || exponent || f || (!isdigit(this->_input[i + 1]) && !digits))
                this->_typeInput = invalid;
            else
                point = true;
        }
        else if (this->_input[i] == 'e' || this->_input[i] == 'E')
        {
            if (exponent || f || (!isdigit(this->_input[i + 1]) && (this->_input[i + 1] != '-' && this->_input[i + 1] != '+')))
                this->_typeInput = invalid;
            else   
                exponent = true;
        }
        else if (this->_input[i] == 'f' || this->_input[i] == 'F')
        {
            if (f)
                this->_typeInput = invalid;
            else   
                f = true;
        }
        else if (this->_input[i] == '-' || this->_input[i] == '+')
        {
            if (!isdigit(this->_input[i + 1]) && this->_input[i + 1] != '.')
                this->_typeInput = invalid;
        }
        else if (i != this->_input.length())
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
        for (unsigned int j = 0; j < 6; j++)
        {
            if (this->_input == specials[j])
            {
                if (j < 3)
                    this->_typeInput = Double;
                else
                    this->_typeInput = Float;
            }
        }
    }
}

void Conversion::acquireValue()
{
    double inputValue = strtod(this->_input.c_str(), NULL);

    this->inputValue = inputValue;

    if (this->_typeInput == Int)
    {
        if (inputValue < std::numeric_limits<int>::min() || inputValue > std::numeric_limits<int>::max())
            this->oorInt = true;
        this->intValue = static_cast<int>(inputValue);
    }
    else if (this->_typeInput == Float)
    {
        if (inputValue > std::numeric_limits<float>::max() && inputValue != std::numeric_limits<float>::infinity())
            this->oorFloat = true;
        this->floatValue = static_cast<float>(inputValue);
    }
    else if (this->_typeInput == Double)
    {
        if (inputValue > std::numeric_limits<double>::max() && inputValue != std::numeric_limits<double>::infinity())
            this->oorDouble = true;    
        this->doubleValue = inputValue;
    }
}

void Conversion::displayResult() const
{
    std::cout << "char : ";
    this->displayChar();
    std::cout << std::endl;
    std::cout << "int : ";
    this->displayInt();
    std::cout << std::endl;
    std::cout << "float : ";
    this->displayFloat();
    std::cout << std::endl;
    std::cout << "double : ";
    this->displayDouble();
    std::cout << std::endl;
}

void Conversion::displayDouble() const
{
    if (this->_typeInput == Int)
    {
        if (this->oorInt)
            std::cout << "Impossible";
        else
        {
            std::cout << static_cast<double>(this->intValue);
            if (abs(this->intValue) < 1000000)
                std::cout << ".0";
        }
    }
    else if (this->_typeInput == Float)
    {
        if (this->oorFloat || (this->inputValue > std::numeric_limits<double>::max() && inputValue != std::numeric_limits<double>::infinity()))
            std::cout << "Impossible";
        else
        {
            double *temp = new double;
            std::cout << static_cast<double>(this->floatValue);
            if (modf(this->floatValue, temp) == 0 && fabs(this->floatValue) < 1000000)
                std::cout << ".0";
            delete temp;
        }
    }
    else if (this->_typeInput == Double)
    {
        if (this->oorDouble)
            std::cout << "Impossible";
        else
        {
            double *temp = new double;
            std::cout << this->doubleValue;
            if (modf(this->doubleValue, temp) == 0 && fabs(this->doubleValue) < 1000000)
                std::cout << ".0";
            delete temp;
        }
    }
}

void Conversion::displayFloat() const
{
    if (this->_typeInput == Int)
    {
        if (this->oorInt)
            std::cout << "Impossible";
        else
        {
            std::cout << static_cast<float>(this->intValue);
            if (abs(this->intValue) < 1000000)
                std::cout << ".0f";
        }
    }
    else if (this->_typeInput == Float)
    {
        if (this->oorFloat || (this->inputValue > std::numeric_limits<float>::max() && inputValue != std::numeric_limits<double>::infinity()))
            std::cout << "Impossible";
        else
        {
            double *temp = new double;
            std::cout << this->floatValue;
            if (modf(this->floatValue, temp) == 0 && fabs(this->floatValue) < 1000000)
                std::cout << ".0";
            std::cout << "f";
            delete temp;
        }
    }
    else if (this->_typeInput == Double)
    {
        if (this->oorDouble || (this->inputValue > std::numeric_limits<float>::max() && inputValue != std::numeric_limits<double>::infinity()))
            std::cout << "Impossible";
        else
        {
            double *temp = new double;
            std::cout << static_cast<float>(this->doubleValue);
            if (modf(this->doubleValue, temp) == 0 && fabs(this->doubleValue) < 1000000)
                std::cout << ".0";
            std::cout << "f";
            delete temp;
        }
    }
}

void Conversion::displayInt() const
{
    if (this->_typeInput == Int)
    {
        if (this->oorInt)
            std::cout << "Impossible";
        else
            std::cout << this->intValue;
    }
    else if (this->_typeInput == Float)
    {
        if (this->oorFloat || this->inputValue - static_cast<int>(this->inputValue) != 0.0f || this->inputValue < std::numeric_limits<int>::min() || this->inputValue > std::numeric_limits<int>::max())
            std::cout << "Impossible";
        else
            std::cout << static_cast<int>(this->floatValue);
    }
    else if (this->_typeInput == Double)
    {
        if (this->oorDouble || this->inputValue - static_cast<int>(this->inputValue) != 0.0 || this->inputValue < std::numeric_limits<int>::min() || this->inputValue > std::numeric_limits<int>::max())
            std::cout << "Impossible";
        else
            std::cout << static_cast<int>(this->doubleValue);
    }
}

void Conversion::displayChar() const
{
    if (this->_typeInput == Int)
    {
        if (this->oorInt || this->intValue < std::numeric_limits<char>::min() || this->intValue > std::numeric_limits<char>::max())
            std::cout << "Impossible";
        else if (isprint(this->intValue))
            std::cout << "'" << static_cast<char>(this->intValue) << "'";
        else
            std::cout << "Non displayable";
    }
    else if (this->_typeInput == Double)
    {
        if (this->doubleValue - static_cast<int>(this->doubleValue) != 0)
            std::cout << "Impossible";
        else if (this->oorDouble || static_cast<int>(this->doubleValue) < std::numeric_limits<char>::min() || static_cast<int>(this->doubleValue) > std::numeric_limits<char>::max())
            std::cout << "Impossible";
        else if (isprint(static_cast<char>(this->doubleValue)))
            std::cout << "'" << static_cast<char>(this->doubleValue) << "'"; 
        else
            std::cout << "Non displayable";
    }
    else if (this->_typeInput == Float)
    {
        if (this->floatValue - static_cast<float>(static_cast<int>(this->floatValue)) != 0)
            std::cout << "Impossible";
        else if (this->oorFloat || static_cast<int>(this->floatValue) < std::numeric_limits<char>::min() || static_cast<int>(this->floatValue) > std::numeric_limits<char>::max())
            std::cout << "Impossible";
        else if (isprint(static_cast<char>(this->floatValue)))
            std::cout << "'" << static_cast<char>(this->floatValue) << "'"; 
        else
            std::cout << "Non displayable";
    }
}