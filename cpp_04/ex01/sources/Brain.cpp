/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:29:23 by avieira           #+#    #+#             */
/*   Updated: 2021/11/16 14:45:46 by avieira          ###   ########.fr       */
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
    *this->ideas = brain.getIdeas();
    return (*this);
}