/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:06:24 by anlima            #+#    #+#             */
/*   Updated: 2023/11/03 14:11:29 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "Error! Usage `./harlFilter <arg>`. You cannont pass multiple arguments" << std::endl;
}
