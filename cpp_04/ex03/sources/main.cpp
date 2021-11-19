/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:49:55 by avieira           #+#    #+#             */
/*   Updated: 2021/11/19 23:15:13 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AMateria.hpp"
#include "../headers/Cure.hpp"
#include "../headers/Character.hpp"
#include "../headers/Ice.hpp"
#include "../headers/MateriaSource.hpp"

void display(ICharacter *me, ICharacter &target)
{
	for (int i = 0; i < 4; i++)
		me->use(i, target);
}

int main()
{
    /*IMateriaSource* src = new MateriaSource();
    
    AMateria *temp;
    
    temp = new Ice();
    src->learnMateria(temp);
    delete temp;
    
    temp = new Cure();
    src->learnMateria(temp);
    delete temp;

    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    return 0;*/
    IMateriaSource* src = new MateriaSource();
	
    AMateria *ice = new Ice();
	AMateria *cure = new Cure();

	src->learnMateria(ice);
	src->learnMateria(cure);

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	
	AMateria* tmp;

    std::cout << std::endl << "---Equiping 2 Ice" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
    display(me, *bob);
    std::cout << std::endl << "---Equiping unknow materia" << std::endl;
    tmp = src->createMateria("null");
	me->equip(tmp);
    display(me, *bob);
    std::cout << std::endl << "---Equiping 3 Cure" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
    display(me, *bob);

    std::cout << std::endl << "---Unequiping Cure on index 3 then Ice on idex 1" << std::endl;
	me->unequip(3);
	me->unequip(1);
    display(me, *bob);

	delete bob;
	delete me;
	delete src;
	delete ice;
	delete cure;
	return 0;
}