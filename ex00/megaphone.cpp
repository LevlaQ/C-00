/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:35:49 by gyildiz           #+#    #+#             */
/*   Updated: 2025/08/28 18:46:32 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string upper(std::string str)
{
	for(unsigned int i = 0; i < str.length(); i++)
		if(std::islower(str[i]))
			str[i] = str[i] -32;
	return (str);
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 0; i<ac-1; i++)
		std::cout<<upper(av[i+1]);
	std::cout << "\n";
}
