/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:29:58 by avieira           #+#    #+#             */
/*   Updated: 2021/11/07 14:24:04 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

enum enumLevel
{
    eDebug = 0,
    eInfo,
    eWarning,
    eError,
    eNone
};

class Karen
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void noFilter(void);
        std::string _filter;
        enumLevel getLevel(std::string level);

    public:
        Karen(std::string filter);
        void complain(std::string level);

};

typedef void (Karen::*DefineLevel)(void);

#endif