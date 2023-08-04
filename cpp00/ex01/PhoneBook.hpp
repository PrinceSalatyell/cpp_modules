/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salatiel <salatiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:30:46 by salatiel          #+#    #+#             */
/*   Updated: 2023/08/04 16:47:52 by salatiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

class PhoneBook {

	public:
		Contact contacts[8];
		static const std::string elements[5];
		int nextIndexToReplace;

		PhoneBook();
		void	addContact();
		int		pickIndex();
		void	printContacts();
		void	displayContact(int index);
};