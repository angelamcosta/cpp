/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:35:27 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 21:16:31 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
// Color macros
#define PURPLE "\033[35m"
#define CLEAR "\033[0m"

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &src);
		~Brain();
		Brain &operator=(Brain const &rhs);
};

#endif
