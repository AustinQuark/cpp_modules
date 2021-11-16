/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:51:53 by avieira           #+#    #+#             */
/*   Updated: 2021/11/16 22:25:51 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;

    public:
        Cat();
        ~Cat();
        Cat(const Cat &cat);
        const Cat &operator=(const Cat &cat);
        void makeSound() const;
};

#endif