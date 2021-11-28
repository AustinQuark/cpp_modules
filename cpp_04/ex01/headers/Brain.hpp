/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:20:22 by avieira           #+#    #+#             */
/*   Updated: 2021/11/28 17:26:35 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    
    public:
        Brain();
        Brain(const Brain &brain);
        ~Brain();
        std::string *getIdeas() const;
        void setIdeas(int i, std::string &idea);
        Brain &operator=(const Brain &brain);
};

#endif