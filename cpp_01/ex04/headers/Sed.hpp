/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 01:08:43 by avieira           #+#    #+#             */
/*   Updated: 2021/11/06 12:29:45 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>

class Sed
{
    private:
        std::string _str_file_in;
        std::string _s1;
        std::string _s2;
        std::string _str_file_out;
        void sedReadWrite(std::ifstream &file_in, std::ofstream &file_out) const;
    
    public:
        Sed(std::string str_file_in, std::string s1, std::string s2);
        void sedFile() const;
};

#endif