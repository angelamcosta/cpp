/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:39:25 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 00:27:54 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

void PhoneBook::addContact(void)
{
	int			i;
	std::string	first_name;
	static int	count = 0;

	i = count % 8;
	Contact contact = createContact(i);
	this->phone_book_[i] = contact;
	first_name = contact.getFirstName();
	std::cout << GREEN << "Contact '" << first_name << "' added successfully!" << CLEAR << std::endl;
	std::cout << GREEN << "Contact '[" << i << "]': " << first_name << CLEAR << std::endl;
	count++;
}

void PhoneBook::promptMenu(void)
{
	std::cout << YELLOW << "\u2022 Type ADD to add a new contact;" << std::endl;
	std::cout << YELLOW << "\u2022 Type SEARCH to search for a contact;" << std::endl;
	std::cout << YELLOW << "\u2022 Type EXIT to exit your phone book.\n‣ ";
}

void PhoneBook::searchContact(void)
{
	int			i = -1;
	std::string	first_name;

	std::cout << PINK << "You chose the SEARCH option" << CLEAR << std::endl;
	std::cout << BLUE << "Type the first name ‣ " <<  CLEAR;
	std::cin >> first_name;
	while (++i < 8)
	{
		if (this->phone_book_[i].getFirstName() == first_name)
			break ;
		else if (i == 7)
		{
			std::cout << RED << "ERROR! Contact `" << first_name << "` not found." <<  CLEAR << std::endl;
			return ; 
		}
	}
	displayContact(this->phone_book_[i]);
}

Contact PhoneBook::createContact(int i)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

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
	Contact contact(i, first_name, last_name, nickname, darkest_secret, phone_number);
	return (contact);
}

void	PhoneBook::displayContact(Contact contact)
{
	std::cout << BLUE
			<< std::setw(10) << "Index" << " | "
			<< std::setw(10) << "First Name" << " | "
			<< std::setw(10) << "Last Name" << " | "
			<< std::setw(10) << "Nickname" << " | "
			<< std::setw(10) << "Darkest Secret" << " | "
			<< std::setw(10) << "Phone Number" << " | "
			<< CLEAR << std::endl;
	std::cout << GREEN
			<< std::setw(10) << contact.getId() << " | "
			<< std::setw(10) << contact.getFirstName() << " | "
			<< std::setw(10) << contact.getLastName() << " | "
			<< std::setw(10) << contact.getNickname() << " | "
			<< std::setw(10) << contact.getDarkestSecret() << " | "
			<< std::setw(10) << contact.getPhoneNumber() << " | "
			<< CLEAR << std::endl;
}