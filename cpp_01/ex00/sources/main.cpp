/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 02:36:45 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 03:15:34 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

int main(void)
{
    std::cout << "Creating manual zombie" << std::endl;
    Zombie manual("manual");
    manual.announce();

    std::cout << "Creating new zombie with newZombie function" << std::endl;
    Zombie *nw = newZombie("new");
    nw->announce();

    std::cout << "Creating random Zombie" << std::endl;
    randomChump("random");
    
    std::cout << "Deleting new" << std::endl;
    delete nw;
}