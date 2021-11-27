/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 00:47:46 by avieira           #+#    #+#             */
/*   Updated: 2021/11/27 01:38:47 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T> class Array
{
    private:
        T *array;
        unsigned int _size;

    public:
        Array() : array(new T[0]), _size(0)
        {
            std::cout << "Default constructor called" << std::endl;
        }

        Array(unsigned int n) : array(new T[n]), _size(n)
        {
            std::cout << "Constructor called" << std::endl;
        }
        
        Array(Array const &array) : array(new T[array.size()])
        {
            std::cout << "Copy constructor called" << std::endl;
            for (unsigned int i = 0; i < this->_size(); i++)
                this->array[i] = array[i];
        }

        Array &operator=(Array const &array)
        {
            std::cout << "Assigment operator called" << std::endl;
            delete [] this->array;
            this->array = new T[array.size()];
            this->_size = array.size();
            for (unsigned int i = 0; i < this->_size; i++)
                this->array[i] = array[i];
            return (*this);
        }

        T &operator[](unsigned int n)
        {
            if (n >= this->_size)
                throw std::overflow_error("Out of range access member");
            return (this->array[n]);
        }
        
        const T &operator[](unsigned int n) const
        {
            if (n >= this->_size)
                throw std::overflow_error("Out of range access member");
            return (this->array[n]);
        }

        unsigned int size() const
        {
            return (this->_size);
        }
};

#endif