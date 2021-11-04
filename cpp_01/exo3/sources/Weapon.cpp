/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:06:57 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 16:41:43 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Weapon.hpp"

std::string const &Weapon::get_type() const
{
    std::string &ref = this->_type;
    return (ref);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

Weapon::Weapon(std::string type) : _type(type)
{
}