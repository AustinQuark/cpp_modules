/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:36:33 by avieira           #+#    #+#             */
/*   Updated: 2021/11/29 00:13:45 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Span.hpp"

#define RANGE 2147483647
#define SIZE 100000000

Span *allocateSpan(unsigned int N)
{
    Span *nw = new Span(N);

    srand(time(NULL));
    for (unsigned int i = 0; i < N; i++)
        nw->addNumber((rand() % static_cast<unsigned int>(RANGE) * static_cast<unsigned int>(2)) - RANGE);
    return (nw);
}

int main(void)
{
    std::cout << "---Simple test" << std::endl;
    Span sp = Span(5);
    sp.addNumber(-42);
    sp.addNumber(42);
    sp.addNumber(1);
    sp.addNumber(2);
    sp.addNumber(0);
    std::cout << "LongestSpan  : " << sp.longestSpan() << std::endl;
    std::cout << "ShortestSpan : " << sp.shortestSpan() << std::endl;
    
    std::cout << "---AddFromIterators test" << std::endl;
    Span i = Span(5);
    std::vector<int> t;
    t.push_back(-42);
    t.push_back(42);
    t.push_back(1);
    t.push_back(2);
    t.push_back(3);
    std::vector<int>::iterator o;
    try
    {
        i.addFromIterators(t.begin(), t.end(), &t);
        std::cout << "LongestSpan  : " << i.longestSpan() << std::endl;
        std::cout << "ShortestSpan : " << i.shortestSpan() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    

    std::cout << "---Test with Span of size " << SIZE << " filled with random numbers beetween -RANGE and +RANGE (RANGE = " << RANGE << ", theorical max longestSpan = " << 2.0 * RANGE << ")" << std::endl;
    Span *span = allocateSpan(SIZE);
    std::cout << "LongestSpan  : " << span->longestSpan() << std::endl;
    std::cout << "ShortestSpan : " << span->shortestSpan() << std::endl;
    delete span;

    std::cout << "---Exceptions tests" << std::endl;
    std::cout << "--Trying to addNumber N + 1 times" << std::endl;
    try
    {
        sp.addNumber(0);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "--Trying to get shortestSpan of size 1 with 1 element" << std::endl;
    try
    {
        Span a(1);

        a.addNumber(1);
        std::cout << a.shortestSpan() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "--Trying to get longestSpan of size 5 with no element (prooving it's size dependant and not capacity dependant)" << std::endl;
    Span a(5);
    try
    {
        std::cout << a.longestSpan() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}