/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:28:49 by avieira           #+#    #+#             */
/*   Updated: 2021/11/28 17:31:33 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"

#define NB_ANIMALS 2

int	main( void )
{

    //Animal *abstractAnimal = new Animal(); //Trying to instantiate abstract class Animal

    std::cout << "---Leak test" << std::endl;
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;
        delete i;
    }
    std::cout << "---Array create fill and delete" << std::endl;
    {
        Animal *array[NB_ANIMALS];
        int i;
        for (i = 0 ; i < NB_ANIMALS; i++)
        {
            if (i < NB_ANIMALS / 2)
                array[i] = new Cat();
            else
                array[i] = new Dog();
            std::cout << array[i]->getType() << std::endl;
            array[i]->makeSound(); 
        }
        for (i = NB_ANIMALS - 1; i > -1; i--)
            delete array[i];
    }
    std::cout << "---Deep copy test" << std::endl;
    {
        std::cout << "--Creating catA" << std::endl;
        const Cat *catA = new Cat();
        std::cout << "--Fill ideas[1] of catA" << std::endl;
        Brain *brainA = catA->getBrain();
        std::string str = "wassup";
        brainA->setIdeas(1, str);
        std::cout << "--Printing ideas[0], ideas[1], ideas[2] of catA" << std::endl;
        std::string *ideas = brainA->getIdeas();
        std::cout << "-" << ideas[0] << std::endl; 
        std::cout << "-" << ideas[1] << std::endl; 
        std::cout << "-" << ideas[2] << std::endl;
        std::cout << "--Copy construct catB from catA " << std::endl;
        const Cat *catB = new Cat(*catA);
        std::cout << "--Delete catA" << std::endl;
        delete catA;
        std::cout << "--Printing ideas[0], ideas[1], ideas[2] of catB" << std::endl;
        Brain *brainB = catB->getBrain();
        std::string *ideass = brainB->getIdeas();
        std::cout << "-" << ideass[0] << std::endl; 
        std::cout << "-" << ideass[1] << std::endl; 
        std::cout << "-" << ideass[2] << std::endl;
        std::cout << "--Delete cat B" << std::endl;
        delete catB;
    }
}