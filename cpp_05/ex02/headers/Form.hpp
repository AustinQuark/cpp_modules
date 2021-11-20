/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:55:06 by avieira           #+#    #+#             */
/*   Updated: 2021/11/20 21:28:59 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <ostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        int const _gradeSign;
        int const _gradeExec;
        bool _signed;
        static const int _lowestGrade = 150;
        static const int _highestGrade = 1;
    
    public:
        Form();
        Form(std::string const &name, int const gradeSign, int const gradeExec);
        Form(const Form &form);
        Form &operator=(const Form &form);
        ~Form();

        std::string const &getName() const;
        int getGradeSign() const;
        int getGradeExec() const;
        bool getSigned() const;

        Form &beSigned(Bureaucrat &bureaucrat);

        virtual void execute(Bureaucrat const &executor) const = 0;

        void canExecute(Bureaucrat const &executor);

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

        class FormNotSigned : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif