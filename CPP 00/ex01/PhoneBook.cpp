/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:39:25 by anlima            #+#    #+#             */
/*   Updated: 2023/10/30 16:26:27 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

void PhoneBook::addContact(void)
{
	int i;
	std::string first_name;
	static int count = 0;

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
	int i = -1;
	int index;

	std::cout << PINK << "You chose the SEARCH option" << CLEAR << std::endl;
	displayMessage();
	while (++i < 8)
	{
		if (this->phone_book_[i].getId() != -1)
			displayTruncated(this->phone_book_[i]);
	}
	std::cout << BLUE << "Type the index ‣ " << CLEAR;
	std::cin >> index;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << RED << "ERROR! Index must be numeric." << CLEAR << std::endl;
	}
	else if (index < 0 || index > 7)
		std::cout << RED << "ERROR! Index out of bounds." << CLEAR << std::endl;
	else if (this->phone_book_[index].getId() == -1)
		std::cout << RED << "ERROR! Contact with id `" << index << "` not found." << CLEAR << std::endl;
	else
		displayContact(this->phone_book_[index]);
}

Contact PhoneBook::createContact(int i)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	long phone_number;

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
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << BLUE << "Type a valid phone number ‣ " << CLEAR;
		std::cin >> phone_number;
	}
	Contact contact(i, first_name, last_name, nickname, darkest_secret, phone_number);
	return (contact);
}

void PhoneBook::displayContact(Contact contact)
{
	std::cout << GREEN
			  << "\nIndex: "
			  << contact.getId() << std::endl
			  << "First Name: "
			  << contact.getFirstName() << std::endl
			  << "Last Name: "
			  << contact.getLastName() << std::endl
			  << "Nickname: "
			  << contact.getNickname() << std::endl
			  << "Phone Number: "
			  << contact.getPhoneNumber() << std::endl
			  << "Darkest Secret: "
			  << contact.getDarkestSecret() << std::endl
			  << CLEAR << std::endl;
}

void	PhoneBook::displayTruncated(Contact contact)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	long phone_number;

	first_name = contact.getFirstName().substr(0, 10);
	last_name = contact.getLastName().substr(0, 10);
	nickname = contact.getNickname().substr(0, 10);
	phone_number = contact.getPhoneNumber();
	std::cout << GREEN;
	std::cout << std::setw(10) << contact.getId() << " | ";
	if (first_name.size() >= 10)
		printStr(first_name);
	else
		std::cout << std::setw(10) << first_name << " | ";
	if (last_name.size() >= 10)
		printStr(last_name);
	else
		std::cout << std::setw(10) << last_name << " | ";
	if (nickname.size() >= 10)
		printStr(nickname);
	else
		std::cout << std::setw(10) << nickname << " | ";
	std::cout << std::setw(10) << phone_number << " | ";
	std::cout << CLEAR << std::endl;
}

void	PhoneBook::displayMessage(void)
{
	std::cout << BLUE
			  << std::setw(10) << "Index"
			  << " | "
			  << std::setw(10) << "First Name"
			  << " | "
			  << std::setw(10) << "Last Name"
			  << " | "
			  << std::setw(10) << "Nickname"
			  << " | "
			  << std::setw(10) << "Phone Number"
			  << CLEAR << std::endl;
}

void	PhoneBook::printStr(std::string str)
{
	int i = -1;
	while (++i < 9)
		std::cout << str[i];
	std::cout << ". | ";
}
