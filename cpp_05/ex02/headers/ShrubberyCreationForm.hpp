/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:26:39 by avieira           #+#    #+#             */
/*   Updated: 2021/11/20 19:53:42 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

# define TREES "               ,@@@@@@@,\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\
   `&%\\ ` /%&'    |.|        \\ '|8'\
       |o|        | |         | |\
       |.|        | |         | |\
    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_"


class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &form);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &form);
        ~ShrubberyCreationForm();

        std::string const &getTarget() const;

        void action() const;

        void execute(Bureaucrat const &executor);
};

#endif