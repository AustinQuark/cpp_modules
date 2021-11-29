/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:36:33 by avieira           #+#    #+#             */
/*   Updated: 2021/11/29 17:36:53 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mutantstack.hpp"

#include <iostream>

#define SIZE 43

int main(void)
{
    MutantStack<int> mstack;

    std::cout << "Creating mutantstack of ints from 0 until " << SIZE << " using push method of stack" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < SIZE; i++)
        mstack.push(i);

    if (mstack.empty())
    {
        std::cout << "empty stack" << std::endl;
        return (0);
    }
    std::cout << "---Iterators---" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    std::cout << "Getting begin iterator it, *it = " << *it << std::endl;
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "Getting end iterator ite, *(ite -  1) = " << *(ite - 1) << std::endl;

    std::cout << "Displaying mutantstack using while (it < ite){...; ++it;}" << std::endl;
    while (it < ite)
    {
        std::cout << *it << " "; 
        ++it; 
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "---Reverse Iterators---" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    std::cout << "Getting rbegin iterator rit, *rit = " << *rit << std::endl;
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    std::cout << "Getting rend iterator rite, *(rite -  1) = " << *(rite - 1) << std::endl;

    std::cout << "Displaying mutantstack using while (rit < rite){...; rit + 2;}" << std::endl;
    while (rit < rite)
    {
        std::cout << *rit << " "; 
        rit += 2; 
    }
    std::cout << std::endl;

    std::stack<int> s(mstack);
    return 0;
}