/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:06:03 by avieira           #+#    #+#             */
/*   Updated: 2021/11/13 13:44:01 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include "../headers/FragTrap.hpp"
#include "../headers/ScavTrap.hpp"


int main(void)
{
    FragTrap alpha("null");
    FragTrap b("rocky");
    FragTrap a("alpha");
    FragTrap rocky(b);
    alpha = a;

    alpha.takeDamage(4);
    alpha.attack("rocky");
    alpha.highFivesGuys();
    alpha.beRepaired(6);
    rocky.takeDamage(4);
    rocky.attack("alpha");
    rocky.beRepaired(5);
}