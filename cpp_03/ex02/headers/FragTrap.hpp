/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:32:25 by avieira           #+#    #+#             */
/*   Updated: 2021/11/13 13:55:00 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        FragTrap();
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &scavtrap);
        FragTrap &operator=(const ClapTrap &scavtrap);
        void highFivesGuys(void) const;
        ~FragTrap();
};

#endif