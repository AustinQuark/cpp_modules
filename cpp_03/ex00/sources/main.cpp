/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:06:03 by avieira           #+#    #+#             */
/*   Updated: 2021/11/28 16:55:18 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ClapTrap.hpp"

int main(void)
{
    ClapTrap alpha;
    ClapTrap b("rocky");
    ClapTrap e("alpha");
    ClapTrap rocky(b);
    alpha = e;


    alpha.takeDamage(4);
    alpha.attack("rocky");
    alpha.beRepaired(6);
    rocky.takeDamage(4);
    rocky.attack("alpha");
    rocky.beRepaired(5);
}