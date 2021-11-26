/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 00:04:02 by avieira           #+#    #+#             */
/*   Updated: 2021/11/27 00:05:53 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Functions.hpp"

#include <string>
#include <iostream>

int main(void)
{
    int			a, b;
 	float		c, d;
 	char		e, f;
 	std::string g, h;
 
 	a = 0;
 	b = 42;
 	c = 42.24f;
 	d = 24.42f;
 	e = '4';
 	f = '2';
 	g = "string1";
 	h = "string2";
	std::cout << "---Values" << std::endl;
	std::cout << "a: " << a << " and b: " << b << std::endl;
	std::cout << "c: " << c << " and d: " << d << std::endl;
 	std::cout << "e: " << e << " and f: " << f << std::endl;
 	std::cout << "g: " << g << " and h: " << h << std::endl;
 	std::cout << "---Swap them" << std::endl;
 	swap(a, b);
 	swap(c, d);
 	swap(e, f);
 	swap(g, h);
 	std::cout << "a: " << a << " and b: " << b << std::endl;
 	std::cout << "c: " << c << " and d: " << d << std::endl;
 	std::cout << "e: " << e << " and f: " << f << std::endl;
 	std::cout << "g: " << g << " and h: " << h << std::endl;
	std::cout << "---Min/Max them" << std::endl;
	std::cout << "min(" << a << ", " << b << "): " << min(a, b) << std::endl;
	std::cout << "max(" << a << ", " << b << "): " << max(a, b) << std::endl;
 	std::cout << "min(" << c << ", " << d << "): " << min(c, d) << std::endl;
 	std::cout << "max(" << c << ", " << d << "): " << max(c, d) << std::endl;
 	std::cout << "min(" << e << ", " << f << "): " << min(e, f) << std::endl;
 	std::cout << "max(" << e << ", " << f << "): " << max(e, f) << std::endl;
 	std::cout << "min(" << g << ", " << h << "): " << min(g, h) << std::endl;
 	std::cout << "max(" << g << ", " << h << "): " << max(g, h) << std::endl;

}