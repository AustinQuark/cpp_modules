/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:21:47 by avieira           #+#    #+#             */
/*   Updated: 2021/11/26 20:09:57 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <cmath>

typedef enum e_type
{
    Char = 0,
    Int,
    Float,
    Double,
    none,
    invalid
}            t_type;

class Conversion
{
    private:
        std::string _input;
        t_type _typeInput;

        double inputValue;

        char charValue;
        int intValue;
        float floatValue;
        double doubleValue;

        bool oorInt;
        bool oorFloat;
        bool oorDouble;

        void displayChar() const;
        void displayInt() const;
        void displayFloat() const;
        void displayDouble() const;

        void defineType();
        void acquireValue();
        void displayResult() const;


        public:
        Conversion();
        Conversion(std::string &input);
        Conversion(Conversion const &conversion);
        Conversion &operator=(Conversion const &conversion);
        ~Conversion();

        void setInput(std::string &input);
        std::string const &getInput() const;

        void convertInput();
    
        std::string getType() const;
        t_type getEnumType() const;
};

#endif