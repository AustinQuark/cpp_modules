/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:29:58 by avieira           #+#    #+#             */
/*   Updated: 2021/11/07 05:39:33 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        
    public:
        Karen();
        void complain(std::string level);

};

typedef void (Karen::*DefineLevel)(void);

#endif