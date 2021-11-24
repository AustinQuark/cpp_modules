/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:21:47 by avieira           #+#    #+#             */
/*   Updated: 2021/11/24 20:44:39 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>
# include <iostream>
# include <cstdlib>

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
        //double _inputValue;
        //char charValue;
        //int intValue;
        //float floatValue;
        //double doubleValue;
        void evalCharacter() const;

    public:
        //Remplir les fonctions cannonique une fois tout fini
        Conversion();
        Conversion(std::string &input);
        Conversion(Conversion const &conversion);
        Conversion &operator=(Conversion const &conversion);
        ~Conversion();

        void setInput(std::string &input);
        std::string const &getInput() const;

        t_type defineType();
};

#endif