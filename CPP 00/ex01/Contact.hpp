/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:39:20 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 22:13:40 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
private:
	int id_;
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string darkest_secret_;
	std::string phone_number_;

public:
	Contact(void);
	Contact(int id, std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, std::string phone_number);
	int getId(void);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getDarkestSecret(void);
	std::string getPhoneNumber(void);
};

#endif
