/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:35:36 by avieira           #+#    #+#             */
/*   Updated: 2021/11/01 13:37:06 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

#define DEFAULT_MEGAPHONE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << DEFAULT_MEGAPHONE;
    else
        for (int i = 1; av[i]; i++)
            for (int j = 0; av[i][j]; j++)
                std::cout << (char)toupper(av[i][j]);
    std::cout << std::endl;
}