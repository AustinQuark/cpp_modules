/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:35:02 by avieira           #+#    #+#             */
/*   Updated: 2021/11/08 14:49:25 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Karen.hpp"

Karen::Karen()
{
}

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    DefineLevel _defineLevel[4];

    _defineLevel[0] = &Karen::debug;
    _defineLevel[1] = &Karen::info;
    _defineLevel[2] = &Karen::warning;
    _defineLevel[3] = &Karen::error;
    
    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            (this->*_defineLevel[i])();   
}



