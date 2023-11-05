/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:34:04 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 14:26:54 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_HPP
#include <iostream>

class Fixed {
	private:
		int	fixed_;
		static const int bits_ = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &other);
		~Fixed(void);
		Fixed& operator=(const Fixed &other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif