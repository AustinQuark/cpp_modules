/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:09:03 by avieira           #+#    #+#             */
/*   Updated: 2021/12/01 13:33:02 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/span.hpp"

Span::Span() : N(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int N) : N(N)
{
    std::cout << "Constructor called" << std::endl;
}

Span::Span(Span const &span) : list(span.list), N(span.N)
{
    std::cout << "Copy constructor called" << std::endl;
}

Span &Span::operator=(Span const &span)
{
    std::cout << "Assigment operator called" << std::endl;
    this->N = span.N;
    this->list = span.list;
    return (*this);
}

Span::~Span()
{
    std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int toAdd)
{
    if (this->list.size() >= N)
        throw std::out_of_range("Can't addNumber to full Span object");
    else
        this->list.push_back(toAdd);
}

void Span::addFromIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end, std::vector<int> &add)
{
    if (begin < add.begin() || begin > add.end() || end < add.begin() || end > add.end())
        throw std::logic_error("Iterators not part of third vector argument");
    else if (static_cast<unsigned long>(std::distance(begin, end)) > static_cast<unsigned long>(this->N - this->list.size()))
        throw std::logic_error("addFromRange failed cause range plus actual list size overflows");
    else
    {
        std::vector<int> nw(begin, end);
        this->list.insert(this->list.end(), nw.begin(), nw.end());
    }
}

int Span::canGetSpan() const
{
    if (this->list.size() < 2)
        throw std::logic_error("Not enough elements to get span");
    else
        return (0);
    return (1);
}

unsigned int Span::shortestSpan() const
{
    std::vector<int> temp = this->list;
    unsigned int span = 0;
    bool first_done = false;

    if (this->canGetSpan())
        return (0);
    sort(temp.begin(), temp.end());
    for (std::vector<int>::iterator it = temp.begin(); it < temp.end() - 1; it++)
    {
        if (!first_done || static_cast<unsigned int>(*(it + 1) - *it) < span)
        {
            first_done = true;
            span = *(it + 1) - *it;
        }
    }
    return (span);
}

unsigned int Span::longestSpan() const
{
    std::vector<int> temp = this->list;
    unsigned int span;

    if (this->canGetSpan())
        return (0);
    sort(temp.begin(), temp.end());
    span = *(temp.end() - 1) - *temp.begin();
    return (span);
}