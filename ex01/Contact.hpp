/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 15:17:17 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/02 15:15:49 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class Contact
{
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	public:

	void	set_first_name(const std::string &str);
	void	set_last_name(const std::string &str);
	void	set_nickname(const std::string &str);
	void	set_phone_number(const std::string &str);
	void	set_darkest_secret(const std::string &str);

	const	std::string& get_first_name(void) const;
	const	std::string& get_last_name(void) const;
	const	std::string& get_nickname(void) const;
	const	std::string& get_phone_number(void) const;
	const	std::string& get_darkest_secret(void) const;
};
