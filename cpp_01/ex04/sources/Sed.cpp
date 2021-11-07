/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 01:16:20 by avieira           #+#    #+#             */
/*   Updated: 2021/11/07 04:28:43 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Sed.hpp"

Sed::Sed(std::string str_file_in, std::string s1, std::string s2) : _str_file_in(str_file_in), _s1(s1), _s2(s2)
{
    if (!this->_s1.length())
    {
        std::cout << "Empty string occurence not valid" << std::endl;
        exit(0);
    }
    this->_str_file_out = _str_file_in + ".replace";
}

void Sed::sedReadWrite(std::ifstream &file_in, std::ofstream &file_out) const
{
    std::string     buff;
    size_t          pos;
    bool            found;

    std::getline(file_in, buff, '\0');
    while (!buff.empty())
    {
        found = true;
        pos = buff.find(this->_s1);
        if (pos == std::string::npos)
        {
            found = false;
            pos = buff.length();
        }
        file_out.write(buff.c_str(), pos);
        if (found)
        {
            file_out.write(this->_s2.c_str(), this->_s2.length());
            pos += this->_s1.length();
        }
        buff = buff.substr(pos);
    }
}

void Sed::sedFile() const 
{
    std::ifstream file_in;
    std::ofstream file_out;
    
    file_in.open (this->_str_file_in.c_str());
    
    if (file_in.is_open())
    {
        file_out.open (this->_str_file_out.c_str());
        if (file_out.is_open())
        {
            this->sedReadWrite(file_in, file_out);
            file_out.close();
        }
        else
        {
            std::cout << "Cannot write file : " << this->_str_file_in << std::endl;
            return;
        }
        file_in.close();
    }
    else
        std::cout << "Cannot read file : " << this->_str_file_in << std::endl;
}