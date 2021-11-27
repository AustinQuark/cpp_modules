/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 00:04:02 by avieira           #+#    #+#             */
/*   Updated: 2021/11/27 00:45:56 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Iter.hpp"
#include "../../ex00/headers/Functions.hpp"

#include <string>
#include <iostream>

template <typename T> void displayOneElem(T &c)
{
	std::cout << c;
}

int main(void)
{
	std::string text = "Hello, display string char by char";

	iter(text.c_str(), text.length(), &displayOneElem);
	std::cout << std::endl;

	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	iter(array, sizeof(array) / sizeof(array[0]), &displayOneElem);
	std::cout << std::endl;
}