/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:51:47 by avieira           #+#    #+#             */
/*   Updated: 2021/11/26 23:21:21 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <cstdlib>
# include <iostream>
# include <time.h>

Base *generate(void)
{
    Base *base;
    srand(static_cast<unsigned int>(time(NULL)));
    int r = rand() % 3;

    switch (r)
    {
        case 0:
            base = new A;
            break;
        case 1:
            base = new B;
            break;
        case 2:
            base = new C;
            break;
        }
    return (base);
}

void identify(Base *p)
{
    A *p_a;
    B *p_b;
    C *p_c;

    p_a = dynamic_cast<A *>(p);
    p_b = dynamic_cast<B *>(p);
    p_c = dynamic_cast<C *>(p);

    if (p_a)
        std::cout << "A" << std::endl;
    if (p_b)
        std::cout << "B" << std::endl;
    if (p_c)
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::exception &e) 
    {
        (void)e;
    }

    try
    {
        B b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::exception &e) 
    {
        (void)e;
    }

    try
    {
        C c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::exception &e) 
    {
        (void)e;
    }
}

#endif