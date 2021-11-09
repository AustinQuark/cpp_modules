/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:59:48 by avieira           #+#    #+#             */
/*   Updated: 2021/11/09 22:51:57 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int _fixedValue;
        int static const _fracBits = 8;

    public:
        int static const _shiftBits = 256;
        Fixed();
        Fixed(const Fixed &fixed);
        Fixed(const int value);
        Fixed(const float value);
        Fixed &operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        int getShiftBits() const;
        bool operator>(Fixed const &cmp) const;
        bool operator<(Fixed const &cmp) const;
        bool operator>=(Fixed const &cmp) const;
        bool operator<=(Fixed const &cmp) const;
        bool operator==(Fixed const &cmp) const;
        bool operator!=(Fixed const &cmp) const;
        Fixed operator+(Fixed const &add) const;
        Fixed operator-(Fixed const &sub) const;
        Fixed operator*(Fixed const &times) const;
        Fixed operator/(Fixed const &div) const;
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed &operator--();
        Fixed &operator++();
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
        ~Fixed();
};

std::ostream &operator<<(std::ostream &output, Fixed const &fixed);

#endif