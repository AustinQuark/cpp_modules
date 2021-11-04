/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:31:21 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 12:43:57 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/phonebook.hpp"

Phonebook::Phonebook()
{
    running = true;
    number_of_contacts = 0;
    fields[0] = "first name";
    fields[1] = "last name";
    fields[2] = "nickname";
    fields[3] = "phone number";
    fields[4] = "darkest secret";
}

bool Phonebook::is_running(void) const
{
    return (this->running);
}

void Phonebook::treat_command(std::string prompt)
{
    if (prompt == "EXIT")
        this->running = false;
    else if (prompt == "ADD")
        Phonebook::add_contact();
    else if (prompt == "SEARCH")
        Phonebook::search_contact();
}

void Phonebook::add_contact(void)
{
    std::string prompt;

    if (this->number_of_contacts == 8)
    {
            for (int i = 0; i < 7; i++)
                contacts[i] = contacts[i + 1];
        this->number_of_contacts = 7;
        std::cout << "Oldest contact removed" << std::endl;
    }
    for (int i = 0; i < 5 && !std::cin.eof(); i++)
    {
        std::cout << this->fields[i] << ": ";
        std::getline(std::cin, prompt);
        this->contacts[number_of_contacts].add_info(i, prompt);
    }
    this->number_of_contacts++;
}

void Phonebook::search_contact(void)
{
    std::string tmp;
    int         i_contact;

    if (this->number_of_contacts)
    {
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << "|     index|first name| last name|  nickname|" << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        for (int i = 0; i < this->number_of_contacts; i++)
        {

            std::cout << "|         " << i + 1 << "|";
            for (int j = 0; j < 3; j++)
            {
                tmp = this->contacts[i].get_info(j);
                if (tmp.length() > 10)
                {
                    std::cout << tmp.substr(0, 9) << '.';
                }
                else
                {
                    std::cout << std::setw(10);
                    std::cout << tmp;
                }
                std::cout << "|";
                
            }
            std::cout << std::endl;
        }
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << "Type contact's index for more infos : ";
        std::getline(std::cin, tmp);
        std::stringstream(tmp) >> i_contact;
        if (tmp == "")
            i_contact = 0;
        if (!std::cin.eof())
        {
            if (i_contact > 0 && i_contact <= this->number_of_contacts)
                display_contact(this->contacts[i_contact - 1]);
            else
                std::cout << "Contact unknown" << std::endl;
        }
    }
    else
        std::cout << "Contact list is empty" << std::endl;
}

void Phonebook::display_contact(Contact contact)
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << std::setw(14);
        std::cout << this->fields[i] << ": ";
        std::cout << contact.get_info(i) << std::endl;
    }
}