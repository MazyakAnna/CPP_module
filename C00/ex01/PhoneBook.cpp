/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaegan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:47:24 by bmaegan           #+#    #+#             */
/*   Updated: 2021/11/22 17:47:26 by bmaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook created" << std::endl;
	this->index = 0;
	this->empty = 1;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}

void	PhoneBook::start(void)
{
	int			exit_flag;
	std::string	input;

	exit_flag = 0;
	std::cout << "Welcome!" << std::endl;
	while (!exit_flag && !std::cin.eof())
	{
		std::cout << "Commands: ADD, SEARCH, EXIT:" << std::endl;
		getline(std::cin, input);
		if (input.compare("EXIT") == 0)
			exit_flag = 1;
		else if (input.compare("ADD") == 0)
		{
			this->add_contact();
			std::cout << "Contact added!" << std::endl;
		}
		else if (input.compare("SEARCH") == 0)
			this->search();
		else if (!std::cin.eof() && std::cin.good())
			std::cout << "Unknown command!" << std::endl;
		if (!std::cin.eof() && !std::cin.good())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Wrong input!" << std::endl;
		}
	}
	std::cout << "Bye!" << std::endl;
}

void	PhoneBook::add_contact(void)
{
	if (this->index < 8 && this->index >= 0)
		this->contacts[index].set_contact();
	this->index += 1;
	if (this->index > 7)
		this->index = this->index % 8;
	if (this->empty == 1)
		this->empty = 0;
	return ;
}

void	format_line(std::string s)
{
	if (!s.empty())
	{
		if (s.size() > 10)
			std::cout << std::setw(10) << s.substr(0, 9).append(".");
		else
			std::cout << std::setw(10) << s;
	}
	else
		std::cout << std::setw(10) << "";
	return ;
}

void	PhoneBook::display_all()
{
	int	i;

	i = 0;
	format_line("Index");
	std::cout << "|";
	format_line("First name");
	std::cout << "|";
	format_line("Last name");
	std::cout << "|";
	format_line("Nickname");
	std::cout << std::endl;
	while (i < 8)
	{
		if (this->contacts[i].exists == 1)
		{
			std::cout << std::setiosflags (std::ios::right);
			std::cout << std::setw(10) << i << "|";
			format_line(this->contacts[i].get_first_name());
			std::cout << "|";
			format_line(this->contacts[i].get_last_name());
			std::cout << "|";
			format_line(this->contacts[i].get_nickname());
			std::cout << std::endl;
		}
		i++;
	}
}

void PhoneBook::search(void)
{
	int	i;

	if (this->empty)
	{
		std::cout << "Your phonebook is empty!" << std::endl;
		return ;
	}
	this->display_all();
	std::cout << "input index: ";
	std::cin >> i;
	if (std::cin.good() && i < 8 && i >= 0 && this->contacts[i].exists == 1)
		this->contacts[i].display();
	else
	{
		std::cout << "Sorry, no contact for that index" << std::endl;
		std::cin.clear();
	}
	std::cin.ignore(10000, '\n');
}
