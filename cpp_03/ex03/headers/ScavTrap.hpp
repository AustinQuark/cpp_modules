/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:32:25 by avieira           #+#    #+#             */
/*   Updated: 2021/11/15 19:54:28 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        ScavTrap();
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scavtrap);
        ScavTrap &operator=(const ClapTrap &scavtrap);
        void attack(std::string const &target) const;
        void guardGate(void) const;
        ~ScavTrap();
};

#endif