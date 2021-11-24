/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:21:47 by avieira           #+#    #+#             */
/*   Updated: 2021/11/24 15:04:07 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>
# include <iostream>

typedef enum e_type
{
    Char = 0,
    Int,
    Float,
    Double,
    none
}            t_type;

class Conversion
{
    private:
        std::string _input;
        t_type _typeInput;

    public:
        Conversion();
        Conversion(std::string &input);
        Conversion(Conversion const &conversion);
        Conversion &operator=(Conversion const &conversion);
        ~Conversion();

        void setInput(std::string &input);
        std::string const &getInput() const;

        void defineType();
        t_type getTypeInput() const;
};

#endif