/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:34:12 by gyildiz           #+#    #+#             */
/*   Updated: 2025/08/29 20:05:08 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	
	PhoneBook	book;
	while (42)
	{
		std::getline(std::cin, command);
		if (command.empty())
			break;
		if (command == "ADD")
			book.add_function();
		else if (command == "SEARCH")
			book.search_function();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Give me something real man!\n";
	}
	return (0);
}
