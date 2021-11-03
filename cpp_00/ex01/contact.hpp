/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:27:32 by avieira           #+#    #+#             */
/*   Updated: 2021/11/03 19:15:13 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
    private:
        std::string info_contact[5];

    public :
        void        add_info(int i_info, std::string prompt);
        std::string get_info(int i_info);

};

#endif