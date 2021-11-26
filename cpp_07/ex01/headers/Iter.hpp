/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 00:08:27 by avieira           #+#    #+#             */
/*   Updated: 2021/11/27 00:13:19 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T> void iter(T *array, int size, void (*f)(const T &))
{
    for (int i = 0; i < size; i++)
        f(array[i]);
}

#endif