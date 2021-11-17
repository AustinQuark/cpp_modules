/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:51:53 by avieira           #+#    #+#             */
/*   Updated: 2021/11/17 16:47:53 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
    
    public:
        Dog();
        ~Dog();
        Dog(const Dog &dog);
        const Dog &operator=(const Dog &dog);
        void makeSound() const;
        Brain *getBrain() const;
};

#endif