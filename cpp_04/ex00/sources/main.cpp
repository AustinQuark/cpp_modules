/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:28:49 by avieira           #+#    #+#             */
/*   Updated: 2021/11/16 12:46:26 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"
#include "../headers/WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << "WrongClass Test" << std::endl << "--------------" << std::endl;

    const WrongCat *wrongcat = new WrongCat();
    const WrongAnimal *wronganimal = new WrongAnimal();
    std::cout << wrongcat->getType() << " " << std::endl;
    wrongcat->makeSound();
    wronganimal->makeSound();
    delete wronganimal;
    delete wrongcat;

}