/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salatiel <salatiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:30:34 by salatiel          #+#    #+#             */
/*   Updated: 2023/08/04 15:57:44 by salatiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

class Contact
{
	public:
		std::string fields[5];
		Contact ();
		void	addContact(void);
};