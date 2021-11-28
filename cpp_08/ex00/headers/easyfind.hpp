/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:56:15 by avieira           #+#    #+#             */
/*   Updated: 2021/11/27 15:39:06 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iterator>
# include <algorithm>

template <typename T> 
typename T::iterator easyfind(T &list, int cmp)
{
    typename T::iterator found;

    found = find(list.begin(), list.end(), cmp);
    return (found); //list.end() if no occurence found
}

#endif