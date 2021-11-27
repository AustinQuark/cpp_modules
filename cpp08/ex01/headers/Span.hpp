/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:04:27 by avieira           #+#    #+#             */
/*   Updated: 2021/11/27 21:21:17 by avieira          ###   ########.fr       */
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

        int shortestSpan() const;
        int longestSpan() const;
};

#endif