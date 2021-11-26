/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:57:39 by avieira           #+#    #+#             */
/*   Updated: 2021/11/26 23:27:03 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/A.hpp"
#include "../headers/B.hpp"
#include "../headers/C.hpp"
#include "../headers/Base.hpp"
#include "../headers/Functions.hpp"

int main(void)
{
    Base *base;

    base = generate();
    std::cout << "identify with pointer   : ";
    identify(base);
    std::cout << "identify zith reference : ";
    identify(*base);

    delete base;
}