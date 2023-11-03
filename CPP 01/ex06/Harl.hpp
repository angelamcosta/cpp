/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:06:22 by anlima            #+#    #+#             */
/*   Updated: 2023/11/03 14:06:50 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H
# include <iostream>

class Harl {
	private:
		typedef struct	s_list
		{
			std::string	level;
			void	(Harl::*f)(void);
		}				t_list;
		t_list	list[4];
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
		int	verifyInput(std::string level);
};

#endif
