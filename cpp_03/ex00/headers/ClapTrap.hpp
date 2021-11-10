/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:32:05 by avieira           #+#    #+#             */
/*   Updated: 2021/11/10 16:11:34 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int         _hitpoints;
        int         _energyPoints;
        int         _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptrap);
        ClapTrap &operator=(const ClapTrap &claptrap);
        ~ClapTrap();
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName() const;
        int  getHitpoints() const;
        int  getEnergyPoints() const;
        int  getAttackDamage() const;
};

#endif