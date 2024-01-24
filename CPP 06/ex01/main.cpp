/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:14:11 by anlima            #+#    #+#             */
/*   Updated: 2024/01/24 15:07:48 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		*data;
	uintptr_t	u_ptr;
	Data		*d_ptr;

	data = new Data;
	data->value = 2;
	data->text = "Lela";
	u_ptr = Serializer::serialize(data);
	d_ptr = Serializer::deserialize(u_ptr);
	std::cout << "value => " << d_ptr->value << "\ttext => " << d_ptr->text << std::endl;
	delete (data);
	return (0);
}
