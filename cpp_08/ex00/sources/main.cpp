/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:08:57 by avieira           #+#    #+#             */
/*   Updated: 2021/12/01 14:19:02 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/easyfind.hpp"
#include <vector>
#include <iostream>

#define SIZE 10
#define RANGE 10

int main(void)
{
    std::vector<int> list;

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
        list.push_back(rand() % RANGE);

    std::cout << "---Displaying container list of int" << std::endl;
    
    std::cout << "index : ";
    for (int k = 0; k < SIZE; k++)
        std::cout << k << " ";
    std::cout << std::endl;
    
    std::cout << "value : ";
    for (std::vector<int>::iterator it = list.begin(); it < list.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    int to_find = rand() % RANGE;
    std::cout << "to_find          : " << to_find << std::endl;

    std::vector<int>::iterator found;
    found = easyfind(list, to_find);

    if (found == list.end())
        std::cout << "Couldn't find to_find, easyfind returned list.end()" << std::endl;
    else
    {
    std::ptrdiff_t index = found - list.begin();
        std::cout << "easyfind returns : " << *found << " at index " << index << std::endl;
    }
}