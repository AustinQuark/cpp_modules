/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:50:33 by avieira           #+#    #+#             */
/*   Updated: 2021/11/17 17:50:57 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &animal);
        const Animal &operator=(const Animal &animal);
        std::string const &getType() const;
        virtual void makeSound() const = 0;
};

#endif