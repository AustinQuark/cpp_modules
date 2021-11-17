/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:20:22 by avieira           #+#    #+#             */
/*   Updated: 2021/11/17 17:30:51 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

# define IDEAS_SIZE 100

class Brain
{
    protected:
        std::string ideas[IDEAS_SIZE];
    
    public:
        Brain();
        Brain(const Brain &brain);
        ~Brain();
        std::string *getIdeas() const;
        void setIdeas(int i, std::string &idea);
        Brain &operator=(const Brain &brain);
};

#endif