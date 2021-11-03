/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:27:41 by avieira           #+#    #+#             */
/*   Updated: 2021/11/03 23:00:37 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/contact.hpp"

void Contact::add_info(int i_info, std::string prompt)
{
    this->info_contact[i_info] = prompt;
}

std::string Contact::get_info(int i_info)
{
    return (this->info_contact[i_info]);
}