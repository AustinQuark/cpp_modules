/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:29:23 by avieira           #+#    #+#             */
/*   Updated: 2021/11/17 17:31:23 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    *this = brain;
}

std::string *Brain::getIdeas() const 
{
    return ((std::string *)this->ideas);
}

void Brain::setIdeas(int i, std::string &idea)
{
    if (i < 0 || i >= IDEAS_SIZE)
        std::cout << "setIdea out of range" << std::endl;
    else
        this->ideas[i] = idea;
}

Brain &Brain::operator=(const Brain &brain)
{
    std::string *ideas;

    ideas = brain.getIdeas();
    for (unsigned int i = 0; i < IDEAS_SIZE; i++)
        this->ideas[i] = ideas[i];
    return (*this);
}