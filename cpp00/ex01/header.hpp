/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salatiel <salatiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:07:02 by salatiel          #+#    #+#             */
/*   Updated: 2023/08/02 17:53:30 by salatiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_HPP__
# define __HEADER_HPP__

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

# define BLACK	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define WHITE	"\033[1;37m"
# define END	"\033[0m"

enum Action {
	ADD,
	SEARCH,
	EXIT
};

#endif