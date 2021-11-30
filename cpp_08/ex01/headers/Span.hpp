/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:04:27 by avieira           #+#    #+#             */
/*   Updated: 2021/11/30 16:36:10 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
    private:
        std::vector<int> list;
        unsigned int N;
        int canGetSpan() const;

    public:
        Span();
        Span(unsigned int N);
        Span(Span const &span);
        Span &operator=(Span const &span);
        ~Span();

        void addNumber(int toAdd);
        void addFromIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end, std::vector<int> *add);

        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
};

#endif