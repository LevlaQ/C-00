/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:30:51 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/02 11:52:58 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	counter = 0;
}

//tmp'de soru çıkabilir
void	PhoneBook::add_function()
{
	int empty = 1;
	std::string tmp;
	while (empty)
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, tmp);
		this->list[counter % 8].set_first_name(tmp);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		empty = this->list[counter % 8].get_first_name().empty();
	}
	empty = 1;
	while (empty)
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, tmp);
		this->list[counter  % 8].set_last_name(tmp);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		empty = this->list[counter % 8].get_last_name().empty();
	}
	empty = 1;
	while (empty)
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, tmp);
		this->list[counter  % 8].set_nickname(tmp);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		empty = this->list[counter % 8].get_nickname().empty();
	}
	empty = 1;
	while (empty)
	{
		std::cout << "Enter phone number: ";
		std::getline(std::cin, tmp);
		this->list[counter  % 8].set_phone_number(tmp);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		empty = this->list[counter % 8].get_phone_number().empty();
	}
	empty = 1;
	while (empty)
	{
		std::cout << "Tell me your darkest, deepest secret: ";
		std::getline(std::cin, tmp);
		this->list[counter  % 8].set_darkest_secret(tmp);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		empty = this->list[counter % 8].get_darkest_secret().empty();
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
		std::cout << std::setw(10) << adjust(this->list[i].get_first_name()) << "|";
		std::cout << std::setw(10) << adjust(this->list[i].get_last_name()) << "|";
		std::cout << std::setw(10) << adjust(this->list[i].get_nickname()) << "|\n";
		i++;
	}
	std::cout << "Contact's index: ";
	std::getline(std::cin, index);
	cindex = index.c_str();
	i = std::atoi(cindex);
	while (!(std::isdigit(cindex[0])) || (index.size() != 1) || !(i < people && i >= 0))
	{
		std::cout << "The index you have entered do not exist! Enter again: ";
		std::getline(std::cin, index);
		cindex = index.c_str();
		i = std::atoi(cindex);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
	}
	std::cout << "First Name: "  << this->list[i].get_first_name() << "\n"; 
	std::cout << "Last  Name: "  << this->list[i].get_last_name() << "\n";
	std::cout << "Nickname : "  << this->list[i].get_nickname() << "\n";
	std::cout << "Phone Number: "  << this->list[i].get_phone_number() << "\n";
	std::cout << "Darkest Secret: "  << this->list[i].get_darkest_secret() << "\n";
}


