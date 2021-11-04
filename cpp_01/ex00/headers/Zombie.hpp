/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 02:09:55 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 03:09:10 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    private:

        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
};

Zombie* newZombie( std::string name );
void    randomChump(std::string name);

#endif