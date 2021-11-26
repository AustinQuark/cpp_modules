/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:50:35 by avieira           #+#    #+#             */
/*   Updated: 2021/11/26 22:42:44 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

# include<stdint.h>
# include"Data.hpp"

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

#endif