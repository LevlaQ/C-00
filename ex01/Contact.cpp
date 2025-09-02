/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:26:25 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/02 11:52:56 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::set_first_name(const std::string &str)
{
	this->first_name = str;
}

void	Contact::set_last_name(const std::string &str)
{
	this->last_name = str;
}

void	Contact::set_nickname(const std::string &str)
{
	this->nickname = str;
}

void	Contact::set_phone_number(const std::string &str)
{
	this->phone_number = str;
}

void	Contact::set_darkest_secret(const std::string &str)
{
	this->darkest_secret = str;
}

const	std::string& Contact::get_first_name(void) const
{
	return (first_name);
}

const	std::string& Contact::get_last_name(void) const
{
	return (last_name);
}

const	std::string& Contact::get_nickname(void) const
{
	return (nickname);
}

const	std::string& Contact::get_phone_number(void) const
{
	return (phone_number);
}

const	std::string& Contact::get_darkest_secret(void) const
{
	return (darkest_secret);
}