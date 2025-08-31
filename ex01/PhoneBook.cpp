/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:30:51 by gyildiz           #+#    #+#             */
/*   Updated: 2025/08/31 16:36:18 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	counter = 0;
}

void	PhoneBook::add_function()
{
	int empty = 1;
	while (empty)
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, this->list[counter % 8].first_name);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		empty = this->list[counter % 8].first_name.empty();
	}
	empty = 1;
	while (empty)
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, this->list[counter  % 8].last_name);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		empty = this->list[counter % 8].last_name.empty();
	}
	empty = 1;
	while (empty)
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, this->list[counter  % 8].nickname);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		empty = this->list[counter % 8].nickname.empty();
	}
	empty = 1;
	while (empty)
	{
		std::cout << "Enter phone number: ";
		std::getline(std::cin, this->list[counter  % 8].phone_number);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		empty = this->list[counter % 8].phone_number.empty();
	}
	empty = 1;
	while (empty)
	{
		std::cout << "Tell me your darkest, deepest secret: ";
		std::getline(std::cin, this->list[counter  % 8].darkest_secret);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		empty = this->list[counter % 8].darkest_secret.empty();
	}
	this->counter++;
}

std::string	adjust(std::string word)
{

	if (word.size() > 10)
		word = word.substr(0,9) + ".";
	return (word);
}

void	PhoneBook::search_function()
{
	int		i = 0;
	int		people;
	std::string	index;
	const char	*cindex;
	
	people = counter > 8 ? 8 : counter;
	if (counter == 0)
	{
		std::cout << "No contacts!\n";
		return ;
	}
	std::cout << "     Index|First Name| Last Name|  Nickname|\n";
	while (i < people)
	{
		std::cout << std::setw(10) << i  << "|";
		std::cout << std::setw(10) << adjust(this->list[i].first_name) << "|";
		std::cout << std::setw(10) << adjust(this->list[i].last_name) << "|";
		std::cout << std::setw(10) << adjust(this->list[i].nickname) << "|\n";
		i++;
	}
	std::cout << "Contact's index: \n";
	std::getline(std::cin, index);
	cindex = index.c_str();
	i = std::atoi(cindex);
	while (!(std::isdigit(cindex[0])) || (index.size() != 1) || !(i < people && i >= 0))
	{
		std::cout << "The index you have entered do not exist!\n";
		std::getline(std::cin, index);
		cindex = index.c_str();
		i = std::atoi(cindex);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
	}
	std::cout << "First Name: "  << this->list[i].first_name << "\n"; 
	std::cout << "Last  Name: "  << this->list[i].last_name << "\n";
	std::cout << "Nickname : "  << this->list[i].nickname << "\n";
	std::cout << "Phone Number: "  << this->list[i].phone_number << "\n";
	std::cout << "Darkest Secret: "  << this->list[i].darkest_secret << "\n";	
}


