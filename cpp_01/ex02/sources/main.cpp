/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:40:21 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 15:48:27 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory adress :" << std::endl;
    std::cout << "String : " << &str << std::endl;
    std::cout << "StringPTR : " << stringPTR << std::endl;
    std::cout << "StringREF : " << &stringREF << std::endl << std::endl;
    std::cout << "Strings :" << std::endl;
    std::cout << "StringPTR : " << *stringPTR << std::endl;
    std::cout << "StringREF : " << stringREF << std::endl;
}