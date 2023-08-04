/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salatiel <salatiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:30:37 by salatiel          #+#    #+#             */
/*   Updated: 2023/08/04 16:03:53 by salatiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(void)
{
	std::string input;
	PhoneBook phoneBook;

	std::cout << BLUE << "Welcome to your very own PhoneBook, where you can store up to 8 contacts!" << END << std::endl;
	std::cout << BLUE << "The following commands are available:" << END << std::endl;
	std::cout << YELLOW << "  * ADD" << END << BLUE << "    -> Add a contact to your PhoneBook" << END << std::endl;
	std::cout << YELLOW << "  * SEARCH" << END << BLUE << " -> Check the Information for the contact at the given index" << END << std::endl;
	std::cout << YELLOW << "  * EXIT" << END << BLUE << "   -> Quit the program (and loose all the contacts)" << END << std::endl;
	while (true)
	{
		std::cout << WHITE << "PhoneBook>>  " << END;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			phoneBook.addContact();
			continue;
		}
		else if (input == "SEARCH")
		{
			phoneBook.printContacts();
			continue;
		}
		else if (input == "EXIT")
		{
			std::cout << BLUE << "Thanks for using The PhoneBook app. You're welcome to come back whenever. Bye!" << END << std::endl;
			break;
		}
		else 
		{
			std::cout << RED << "[ERROR] " << END << YELLOW << "Unrecognized Token. Please use ADD, SEARCH or EXIT" << END << std::endl;
			continue;
		}
	}

	return 0;
}