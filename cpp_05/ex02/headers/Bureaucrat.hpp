/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 23:41:29 by avieira           #+#    #+#             */
/*   Updated: 2021/11/20 21:33:43 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    protected:
        std::string const _name;
        int _grade;
        static const int _lowestGrade = 150;
        static const int _highestGrade = 1;

    public:
        Bureaucrat();
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(const Bureaucrat &bureaucrat);
        ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat &bureaucrat);
        
        std::string const &getName() const;
        int getGrade() const;

        void upGrade();
        void downGrade();

        void signForm(Form &form);

        void executeForm(Form const & form);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif