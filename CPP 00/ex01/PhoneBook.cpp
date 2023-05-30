/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:39:25 by anlima            #+#    #+#             */
/*   Updated: 2023/05/30 21:42:49 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

void	PhoneBook::addContact(void)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	long		phone_number;
	int			i = 0;

	std::cout << PINK << "You chose the ADD option" << CLEAR << std::endl;
	std::cout << BLUE << "Type the first name ‣ " << CLEAR;
	std::cin >> first_name;
	std::cout << BLUE << "Type the last name ‣ " << CLEAR;
	std::cin >> last_name;
	std::cout << BLUE << "Type a nickname ‣ " << CLEAR;
	std::cin >> nickname;
	std::cout << BLUE << "Type this person's darkest secret ‣ " << CLEAR;
	std::cin >> darkest_secret;
	std::cout << BLUE << "Type the phone number ‣ " << CLEAR;
	std::cin >> phone_number;

	while(i < 8 && this->phone_book_[i].getId() != -1)
		i++;
	Contact 	contact(i, first_name, last_name, nickname, darkest_secret, phone_number);
	this->phone_book_[i] = contact;
	std::cout << GREEN << "Contact '" << first_name << "' added successfully!" << CLEAR << std::endl;
	std::cout << GREEN << "Contact '[" << i << "]': " << this->phone_book_[i].getName() << CLEAR << std::endl;
}

void	PhoneBook::searchContact(void)
{
	std::cout << PINK << "You chose the SEARCH option" << CLEAR << std::endl;
}

void	PhoneBook::promptMenu(void)
{
	std::cout << YELLOW << "\u2022 Type ADD to add a new contact;" << std::endl;
	std::cout << YELLOW << "\u2022 Type SEARCH to search for a contact;" << std::endl;
	std::cout << YELLOW << "\u2022 Type EXIT to exit your phone book.\n‣ ";
}
