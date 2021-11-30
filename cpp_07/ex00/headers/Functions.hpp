/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 23:57:28 by avieira           #+#    #+#             */
/*   Updated: 2021/11/30 14:59:27 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

template <typename T> void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <typename T> T &min(T &a, T &b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T> T &max(T &a, T &b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif