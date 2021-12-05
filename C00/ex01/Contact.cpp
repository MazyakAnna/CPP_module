/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaegan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:38:55 by bmaegan           #+#    #+#             */
/*   Updated: 2021/11/22 17:39:14 by bmaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->exists = 0;
	this->_first_name = std::string();
	this->_last_name = std::string();
	this->_nickname = std::string();
	this->_phone_number = std::string();
	this->_darkest_secret = std::string();
	return ;
}

Contact::~Contact()
{
	return ;
}

int	Contact::set_first_name(void)
{
	std::string	s;

	std::cout << "Firts name: ";
	getline(std::cin, s);
	if (std::cin)
		this->_first_name = s;
	else
		return (0);
	return (1);
}

int	Contact::set_last_name(void)
{
	std::string	s;

	std::cout << "Last name: ";
	getline(std::cin, s);
	if (std::cin)
		this->_last_name = s;
	else
		return (0);
	return (1);
}

int	Contact::set_nickname(void)
{
	std::string	s;

	std::cout << "Nickname: ";
	getline(std::cin, s);
	if (std::cin)
		this->_nickname = s;
	else
		return (0);
	return (1);
}

int	Contact::set_phone_number(void)
{
	std::string	s;

	std::cout << "Phone number: ";
	getline(std::cin, s);
	if (std::cin)
		this->_phone_number = s;
	else
		return (0);
	return (1);
}

int	Contact::set_darkest_secret(void)
{
	std::string	s;

	std::cout << "Darkest secret: ";
	getline(std::cin, s);
	if (std::cin)
		this->_darkest_secret = s;
	else
		return (0);
	return (1);
}

std::string	Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}

void Contact::set_contact(void)
{
	
	if (!this->set_first_name())
		return ;
	if (!this->set_last_name())
		return ;
	if (!this->set_nickname())
		return ;
	if (!this->set_phone_number())
		return ;
	if (!this->set_darkest_secret())
		return ;
	this->exists = 1;
	return ;
}

void	Contact::display(void)
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone: " << this->_phone_number << std::endl;
	std::cout << "Secret: " << this->_darkest_secret << std::endl;
	return ;
}