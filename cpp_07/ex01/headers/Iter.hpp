/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 00:08:27 by avieira           #+#    #+#             */
/*   Updated: 2021/11/30 15:03:50 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>

template <typename T> void iter(T *array, size_t size, void (*f)(const T &))
{
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}

#endif