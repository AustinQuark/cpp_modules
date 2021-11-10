/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:06:03 by avieira           #+#    #+#             */
/*   Updated: 2021/11/10 19:09:50 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include "../headers/ScavTrap.hpp"

int main(void)
{
    ScavTrap alpha("null");
    ScavTrap b("rocky");
    ScavTrap a("alpha");
    ScavTrap rocky(b);
    alpha = a;


    alpha.takeDamage(4);
    alpha.attack("rocky");
    alpha.beRepaired(6);
    rocky.takeDamage(4);
    rocky.attack("alpha");
    rocky.beRepaired(5);
}