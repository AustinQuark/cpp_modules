/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:25:47 by avieira           #+#    #+#             */
/*   Updated: 2021/11/15 20:09:18 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
        int _hitpoints;
        int _energyPoints;
        int _attackDamage;
        DiamondTrap();
        
    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &diamondtrap);
        DiamondTrap &operator=(const DiamondTrap &diamondtrap);
        void whoAmI(void) const;
};

#endif