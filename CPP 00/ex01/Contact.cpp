/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:05:38 by anlima            #+#    #+#             */
/*   Updated: 2023/10/30 16:19:34 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->id_ = -1;
	this->first_name_ = "";
	this->last_name_ = "";
	this->nickname_ = "";
	this->darkest_secret_ = "";
	this->phone_number_ = 0;
}

Contact::Contact(int id, std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, long phone_number)
{
	this->id_ = id;
	this->first_name_ = first_name;
	this->last_name_ = last_name;
	this->nickname_ = nickname;
	this->darkest_secret_ = darkest_secret;
	this->phone_number_ = phone_number;
}

int Contact::getId(void)
{
	return this->id_;
}

std::string Contact::getFirstName(void)
{
	return this->first_name_;
}

std::string Contact::getLastName(void)
{
	return this->last_name_;
}

std::string Contact::getNickname(void)
{
	return this->nickname_;
}

std::string Contact::getDarkestSecret(void)
{
	return this->darkest_secret_;
}

long Contact::getPhoneNumber(void)
{
	return this->phone_number_;
}
