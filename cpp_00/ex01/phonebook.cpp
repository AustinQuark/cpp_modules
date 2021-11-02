/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:51:59 by avieira           #+#    #+#             */
/*   Updated: 2021/11/02 20:12:21 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>

void get_command(void)
{
    std::string str;

    while (std::cin)
    {
        getline(std::cin, str);
        std::cout << str << std::endl;
    }
}

int main(void)
{
    get_command();
}