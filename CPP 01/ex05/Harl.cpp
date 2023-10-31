/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:06:20 by anlima            #+#    #+#             */
/*   Updated: 2023/10/31 17:44:53 by anlima           ###   ########.fr       */
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

void Harl::complain(std::string level)
{
	static int	i = -1;

	if (i < 4)
		level == this->list[++i].level ? (this->*list[i].f)() : complain(level);
	i = -1;
}
