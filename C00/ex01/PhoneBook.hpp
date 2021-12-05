/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaegan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:46:34 by bmaegan           #+#    #+#             */
/*   Updated: 2021/11/22 17:47:17 by bmaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);

	void	start(void);
	void	add_contact(void);
	void	search(void);

private:
	Contact	contacts[8];
	int		index;
	int		empty;
	int		memory_over;

	void	display_all(void);
	void	set_contact(int i);
};

#endif