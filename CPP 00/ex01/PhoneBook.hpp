/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:39:27 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 22:13:49 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define RED "\033[91;1m"
#define GREEN "\033[92;1m"
#define YELLOW "\033[93;1m"
#define BLUE "\033[94;1m"
#define PINK "\033[95;1m"
#define CLEAR "\033[0m"
#define DECORATION "ᐠ⸜ˎ_ˏ⸝^⸜ˎ_ˏ⸝^⸜ˎ_ˏ⸝ᐟ"

#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
private:
	Contact phone_book_[8];

public:
	void addContact(void);
	void searchContact(void);
	void displayContact(Contact contact);
	static void promptMenu(void);
	static Contact createContact(int i);
};

#endif
