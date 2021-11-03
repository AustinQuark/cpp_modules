/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:51:59 by avieira           #+#    #+#             */
/*   Updated: 2021/11/03 23:00:52 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/phonebook.hpp"

int main(void)
{
    Phonebook   phonebook;
    std::string prompt;

    std::cout << "Type \"ADD\" to add contact, \"SEARCH\" to search contact and \"EXIT\" to exit Phonebook" << std::endl;
    while (phonebook.is_running() && !std::cin.eof())
    {
        
        std::cout << ">";
        std::getline(std::cin, prompt);
        phonebook.treat_command(prompt);
    }
}