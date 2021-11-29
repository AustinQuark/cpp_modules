/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:36:33 by avieira           #+#    #+#             */
/*   Updated: 2021/11/29 01:29:15 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mutantstack.hpp"

#include <iostream>

int main(void)
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    while (it != ite) {
        std::cout << *it << std::endl;
    ++it; }
    std::stack<int> s(mstack); return 0;
}