/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:26:16 by avieira           #+#    #+#             */
/*   Updated: 2021/11/19 19:53:33 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif