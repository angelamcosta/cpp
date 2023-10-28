/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:05:38 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 00:22:52 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	Contact::getId(void)
{
	return this->id_;
}

std::string	Contact::getFirstName(void)
{
	return this->first_name_;
}

std::string	Contact::getLastName(void)
{
	return this->last_name_;
}

std::string	Contact::getNickname(void)
{
	return this->nickname_;
}

std::string	Contact::getDarkestSecret(void)
{
	return this->darkest_secret_;
}

std::string	Contact::getPhoneNumber(void)
{
	return this->phone_number_;
}
