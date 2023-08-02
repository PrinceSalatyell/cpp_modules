/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salatiel <salatiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:44:10 by salatiel          #+#    #+#             */
/*   Updated: 2023/08/02 16:05:18 by salatiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#define YELLOW "\033[7;1;33m"
#define GREEN "\033[7;1;32m"
#define END "\033[0m"

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << YELLOW << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << END << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; j < (int) strlen(argv[i]); j++)
				argv[i][j] = toupper(argv[i][j]);
			std::cout << GREEN << argv[i];
		}
		std::cout << END << std::endl;
	}
	return 0;
}
