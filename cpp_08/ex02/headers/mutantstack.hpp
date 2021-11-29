/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 00:19:52 by avieira           #+#    #+#             */
/*   Updated: 2021/11/29 01:32:37 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typename std::stack<T>::container_type under_type;

        iterator begin() {return (under_type.begin());}
        const_iterator begin() const {return (under_type.begin());}
        iterator end() {return (under_type.end());}
        const_iterator end() const {return (under_type.end());}
        iterator rend() {return (under_type.rend());}
        const_iterator rend() const {return (under_type.rend());}
        
        iterator &iterator::operator++() {};
};

#endif