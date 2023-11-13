/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:35:27 by anlima            #+#    #+#             */
/*   Updated: 2023/11/13 16:00:38 by anlima           ###   ########.fr       */
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
	public:
		Brain();
		Brain(Brain const &src);
		~Brain();
		Brain &operator=(Brain const &rhs);
		std::string ideas[100];
};

#endif
