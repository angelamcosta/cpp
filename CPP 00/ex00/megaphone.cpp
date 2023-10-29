/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:40:16 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 22:13:33 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc > 1)
	{
		while (argv[++i])
		{
			int j = -1;
			while (argv[i][++j])
			{
				argv[i][j] = toupper(argv[i][j]);
				std::cout << argv[i][j];
			}
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}