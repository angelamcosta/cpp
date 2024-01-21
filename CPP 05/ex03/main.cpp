/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:43:07 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 20:43:18 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	AForm	*rrf;

	try
	{
		rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
		std::cout << rrf->getName() << " form was created successfully" << std::endl;
	    delete (rrf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
