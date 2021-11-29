/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 00:19:52 by avieira           #+#    #+#             */
/*   Updated: 2021/11/29 16:23:51 by avieira          ###   ########.fr       */
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

        iterator begin() {return (std::stack<T>::c.begin());}
        const_iterator begin() const {return (std::stack<T>::c.begin());}
        iterator end() {return (std::stack<T>::c.end());}
        const_iterator end() const {return (std::stack<T>::c.end());}
        iterator rbegin() {return (std::stack<T>::c.rbegin());}
        const_iterator rbegin() const {return (std::stack<T>::c.rbegin());}
        iterator rend() {return (std::stack<T>::c.rend());}
        const_iterator rend() const {return (std::stack<T>::c.rend());}
};

#endif