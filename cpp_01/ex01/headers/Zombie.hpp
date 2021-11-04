/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 02:09:55 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 03:52:09 by avieira          ###   ########.fr       */
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
        Zombie();
        ~Zombie();
        void announce(void);
        void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif