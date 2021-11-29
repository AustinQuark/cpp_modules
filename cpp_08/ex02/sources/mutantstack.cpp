/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 01:09:39 by avieira           #+#    #+#             */
/*   Updated: 2021/11/29 18:18:21 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
    std::cout << "Constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &mstack)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = mstack;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &mstack)
{
    this->value_type = mstack.value_type;
    this->container_type = mstack.container
}