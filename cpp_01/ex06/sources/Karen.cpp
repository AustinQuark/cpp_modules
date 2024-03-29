/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:35:02 by avieira           #+#    #+#             */
/*   Updated: 2021/11/08 14:46:58 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Karen.hpp"



Karen::Karen(std::string filter) : _filter(filter)
{
    if (getLevel(this->_filter) == eNone && _filter.length())
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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

enumLevel Karen::getLevel(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    enumLevel   eLevel = eNone;

    for (size_t i = 0; i < 4; i++)
        if (level == levels[i])
            eLevel = (enumLevel)i;
    return (eLevel);
}

void Karen::complain(std::string level)
{
    enumLevel eLevel;
    enumLevel eFilter;

    eLevel = getLevel(level);
    eFilter = getLevel(this->_filter);
    /* If version
    if (eLevel >= eFilter)
    {
        switch (eLevel)
        {
            case eDebug:    this->debug();
                            break;
            case eInfo:     this->info();
                            break;
            case eWarning:  this->warning();
                            break;
            case eError:    this->error();
                            break;
            case eNone:     break;
        }
    }
    */
    switch (eFilter)
    {
        case eDebug:
        {
            switch (eLevel)
            {
                case eDebug:     this->debug();
                                break;
                case eInfo:      this->info();
                                break;
                case eWarning:   this->warning();
                                break;
                case eError:     this->error();
                                break;
                case eNone:     break;
            }
            break;
        }
        case eInfo:
        {
            switch (eLevel)
            {
                case eDebug:    break;
                case eInfo:     this->info();
                                break;
                case eWarning:  this->warning();
                                break;
                case eError:    this->error();
                                break;
                case eNone:     break;
            }
            break;
        }
        case eWarning:
        {
            switch (eLevel)
            {
                case eDebug:    break;
                case eInfo:     break;
                case eWarning:  this->warning();
                                break;
                case eError:    this->error();
                                break;
                case eNone:     break;
            }
            break;
        }
        case eError:
        {
            switch (eLevel)
            {
                case eDebug:    break;
                case eInfo:     break;
                case eWarning:  break;
                case eError:    this->error();
                                break;
                case eNone:     break;
            }
            break;
        }
        case eNone: break;
    }
    
}



