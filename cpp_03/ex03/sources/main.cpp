/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:06:03 by avieira           #+#    #+#             */
/*   Updated: 2021/11/28 17:09:18 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"
#include "../headers/FragTrap.hpp"
#include "../headers/ScavTrap.hpp"
#include "../headers/DiamondTrap.hpp"


int main(void)
{
	{
		DiamondTrap diamond("diamond");

		diamond.attack("ennemy");
		diamond.takeDamage(6);
		diamond.beRepaired(4);
		diamond.takeDamage(3);
		diamond.guardGate();
		diamond.highFivesGuys();
		diamond.whoAmI();
		diamond.beRepaired(8);
		diamond.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		FragTrap frag("frag");

		frag.attack("ennemy");
		frag.takeDamage(6);
		frag.beRepaired(4);
		frag.takeDamage(3);
		frag.highFivesGuys();
		frag.beRepaired(8);
		frag.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ScavTrap scav("scav");

		scav.attack("ennemy");
		scav.takeDamage(6);
		scav.beRepaired(4);
		scav.takeDamage(3);
		scav.guardGate();
		scav.beRepaired(8);
		scav.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ClapTrap clap("clap");

		clap.attack("ennemy");
		clap.takeDamage(6);
		clap.beRepaired(4);
		clap.takeDamage(3);
		clap.beRepaired(8);
		clap.takeDamage(17);
	}
}