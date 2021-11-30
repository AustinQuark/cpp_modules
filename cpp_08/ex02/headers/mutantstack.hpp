/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 00:19:52 by avieira           #+#    #+#             */
/*   Updated: 2021/11/30 12:37:42 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack<T>()
        {
            std::cout << "Constructor called" << std::endl;
        }

        MutantStack<T>(const MutantStack<T> &mstack)
        {
            std::cout << "Copy constructor called" << std::endl;
            *this = mstack;
        }

        MutantStack<T> &operator=(const MutantStack<T> &mstack)
        {
            std::cout << "Assignation operator called" << std::endl;
            this->c = mstack.c;
            return (*this);
        }

        ~MutantStack<T>()
        {
            std::cout << "Destructor called" << std::endl;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin() {return (std::stack<T>::c.begin());}
        const_iterator begin() const {return (std::stack<T>::c.begin());}
        iterator end() {return (std::stack<T>::c.end());}
        const_iterator end() const {return (std::stack<T>::c.end());}
        reverse_iterator rbegin() {return (std::stack<T>::c.rbegin());}
        const_reverse_iterator rbegin() const {return (std::stack<T>::c.rbegin());}
        reverse_iterator rend() {return (std::stack<T>::c.rend());}
        const_reverse_iterator rend() const {return (std::stack<T>::c.rend());}
};

#endif