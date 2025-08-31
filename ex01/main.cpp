/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:34:12 by gyildiz           #+#    #+#             */
/*   Updated: 2025/08/31 16:43:59 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	command;
	
	PhoneBook	book;
	while (42)
	{
		std::cout << "Enter Command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (command.empty())
			continue;
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
