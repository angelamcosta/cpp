/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:39:23 by anlima            #+#    #+#             */
/*   Updated: 2023/05/30 21:07:02 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	// variables
	std::string	option;
	PhoneBook	phone_book;

	std::cout << BLUE << "\n\t" << DECORATION << CLEAR << std::endl;
	std::cout << BLUE << "Welcome to your PhoneBook solution!" << CLEAR << std::endl;
	while (1)
	{
		phone_book.promptMenu();
		std::cin >> option;
		if (option == "EXIT")
			return (0);
		else if (option == "ADD")
			phone_book.addContact();
		else if (option == "SEARCH")
			phone_book.searchContact();
		else
			std::cout << RED << "You chose the " << option << " option, which is not a valid option." << CLEAR << std::endl;
	}
	return (0);
}