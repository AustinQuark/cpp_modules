/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:29:23 by avieira           #+#    #+#             */
/*   Updated: 2021/11/16 22:27:13 by avieira          ###   ########.fr       */
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

const std::string &Brain::getIdeas() const
{
    return (*ideas);
}

Brain &Brain::operator=(const Brain &brain)
{
    std::string ideas;

    ideas = brain.getIdeas();
    for (unsigned int i = 0; i < sizeof(ideas)/sizeof(ideas[0]); i++)
        this->ideas[i] = ideas[i];
    return (*this);
}