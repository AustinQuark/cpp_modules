/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 01:16:20 by avieira           #+#    #+#             */
/*   Updated: 2021/11/06 02:15:22 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Sed.hpp"

Sed::Sed(std::string s1, std::string s2, std::string str_file_in) : _s1(s1), _s2(s2), _str_file_in(str_file_in)
{
    this->_str_file_out = _str_file_in + ".replace";
}

void Sed::sedReadWrite(std::ifstream *file_in, std::ofstream *file_out) const
{
    std::string buff;
    (void)file_out;

    while (std::getline(file_in, buff))
    {
        buff.find(this->_s1);
    }
}

void Sed::sedFile() const 
{
    std::ifstream file_in (this->_str_file_in);
    std::ofstream file_out (this->_str_file_out);
    
    if (file_in.is_open())
    {
        if (file_out.is_open())
            this->sedReadWrite(&file_in, &file_out);
        else
        {
            std::cout << "Cannot write file : " << this->_str_file_in << std::endl;
            return;
        }
    }
    else
        std::cout << "Cannot read file : " << this->_str_file_in << std::endl;
}