/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:44:31 by avieira           #+#    #+#             */
/*   Updated: 2021/11/21 15:59:50 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        typedef struct s_forms
        {
            std::string strForm;
            Form *form;
        } t_forms;

    public:
        Intern();
        Intern(Intern const &intern);
        Intern &operator=(Intern const &intern);
        ~Intern();

        Form *makeForm(std::string const &strForm, std::string const &target);
};

#endif