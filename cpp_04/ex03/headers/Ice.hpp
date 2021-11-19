/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:26:16 by avieira           #+#    #+#             */
/*   Updated: 2021/11/19 19:53:25 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class AMateria;

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif