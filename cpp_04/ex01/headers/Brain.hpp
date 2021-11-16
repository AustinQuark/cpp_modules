/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:20:22 by avieira           #+#    #+#             */
/*   Updated: 2021/11/16 14:44:25 by avieira          ###   ########.fr       */
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
        const std::string &getIdeas() const;
        Brain &operator=(const Brain &brain);
};

#endif