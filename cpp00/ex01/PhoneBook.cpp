/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salatiel <salatiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:30:40 by salatiel          #+#    #+#             */
/*   Updated: 2023/08/04 17:00:03 by salatiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

const std::string PhoneBook::elements[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

PhoneBook::PhoneBook() : nextIndexToReplace(0)
{
	for (int i = 0; i < 8; i++)
		contacts[i] = Contact();
}

int PhoneBook::pickIndex()
{
	int indexToReturn = nextIndexToReplace;
	nextIndexToReplace = (nextIndexToReplace + 1) % 8;
	return indexToReturn;
}

void PhoneBook::addContact()
{
	std::string input;
	int index = pickIndex();
	
	std::cout << BLUE << "You are about to add a Contact to your PhoneBook." << END << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << MAGENTA << elements[i] << ": " << END;
		std::getline(std::cin, input);
		if (input == "")
		{
			std::cout << RED << "[ERROR] " << END << YELLOW << "This field cannot be empty." << END << std::endl;
			i--;
			continue;
		}
		contacts[index].fields[i] = input;
	}
	std::cout << GREEN << "The Contact was added succesfully!" << END << std::endl;
	std::cout << std::endl;
}

void PhoneBook::displayContact(int index)
{
	if (index < 0 || index >= 8 || contacts[index].fields[0] == "")
	{
		std::cout << RED << "[Error] " << END << YELLOW << "Index out of range or no contact at that index." << END << std::endl;
		return;
	}

	std::cout << CYAN << "Contact information for " << contacts[index].fields[2] << ":" << END << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << CYAN << elements[i] << ": " << END << GREEN << contacts[index].fields[i] << END << std::endl;
}

void PhoneBook::printContacts()
{
	std::cout << std::setw(10) << "Index" << '|';
	std::cout << std::setw(10) << "First Name" << '|';
	std::cout << std::setw(10) << "Last Name" << '|';
	std::cout << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].fields[0] != "") // Assuming fields[0] is the first name
		{
			std::cout << std::setw(10) << i << '|';
			
			for (int j = 0; j < 3; j++) // Print first name, last name, and nickname
			{
				std::string field = contacts[i].fields[j];
				if (field.length() > 10)
				{
					field = field.substr(0, 9) + '.';
				}
				std::cout << std::setw(10) << field << '|';
			}
			
			std::cout << std::endl;
		}
	}
	int index;
	while (true)
	{
		std::cout << std::endl << BLUE << "Please enter the index of the contact you'd like to view: " << END;
		std::string input;
		std::getline(std::cin, input);

		// Convert the input to an integer using a stringstream
		std::stringstream ss(input);
		if (ss >> index && !(ss >> input)) // Check that the entire input is an integer
			break; // Exit the loop if a valid integer was entered

		std::cout << RED << "[ERROR] " << END << YELLOW << "Invalid input! Please enter a number corresponding to an entry in the list above." << END << std::endl;
	}

	displayContact(index);
}
