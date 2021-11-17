/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:09:07 by avieira           #+#    #+#             */
/*   Updated: 2021/11/17 21:31:07 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "Character.hpp"

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria(std::string const &type);
        AMateria();
        AMateria(const AMateria &amateria);
        AMateria &operator=(const AMateria &amateria);
        ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif