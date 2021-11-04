/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:20:47 by avieira           #+#    #+#             */
/*   Updated: 2021/11/04 14:04:31 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

# include "contact.hpp"

class Phonebook
{
    private:
        int         number_of_contacts;
        bool        running;
        Contact     contacts[8];
        std::string fields[5];
        void        display_contact(Contact contact) const;
        void        add_contact(void);
        void        search_contact(void) const;

    public:
        Phonebook();
        void        treat_command(std::string);
        bool        is_running(void) const;
};

#endif
