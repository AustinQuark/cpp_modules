/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:30:56 by avieira           #+#    #+#             */
/*   Updated: 2021/11/26 22:42:54 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Functions.hpp"
#include "../headers/Data.hpp"
#include<iostream>

int main(void)
{
    Data *data = new Data;
    uintptr_t serialized;
    Data *deserialized;

    serialized = serialize(data);
    deserialized = deserialize(serialized);

    std::cout << "data pointer : " << data << std::endl;
    std::cout << "serialized   : " << serialized << std::endl;
    std::cout << "deserialized : " << deserialized << std::endl;
    std::cout << "diff original pointer and result pointer = " << data - deserialized << std::endl;
}