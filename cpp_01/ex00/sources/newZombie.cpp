/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 02:23:15 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 03:15:07 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *newZombie;

    newZombie = new Zombie(name);
    return (newZombie);
}