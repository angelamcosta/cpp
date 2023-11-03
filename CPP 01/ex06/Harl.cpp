/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:06:20 by anlima            #+#    #+#             */
/*   Updated: 2023/11/03 14:07:39 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->list[0].level = "DEBUG";
	this->list[0].f = &Harl::debug;
	this->list[1].level = "INFO";
	this->list[1].f = &Harl::info;
	this->list[2].level = "WARNING";
	this->list[2].f = &Harl::warning;
	this->list[3].level = "ERROR";
	this->list[3].f = &Harl::error;
}

Harl::~Harl(void)
{
	std::cout << "Harl was destroyed" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	Harl::verifyInput(std::string level)
{
	int i = -1;
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	while (++i < 4)
	{
		if (levels[i].compare(level) == 0)
			return (1);
	}
	return (0);
}

void Harl::complain(std::string level)
{
	if (!verifyInput(level))
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	switch (level[0])
	{
	case 'E':
		std::cout << "[ ERROR ]" << std::endl;
		(this->*list[0].f)();
		break ;
	case 'W':
		std::cout << "[ WARNING ]" << std::endl;
		(this->*list[0].f)();
		(this->*list[1].f)();
		break ;
	case 'I':
		std::cout << "[ INFO ]" << std::endl;
		(this->*list[0].f)();
		(this->*list[1].f)();
		(this->*list[2].f)();
		break ;
	case 'D':
		std::cout << "[ DEBUG ]" << std::endl;
		(this->*list[0].f)();
		(this->*list[1].f)();
		(this->*list[2].f)();
		(this->*list[3].f)();
		break ;
	default:
		break;
	}
}
