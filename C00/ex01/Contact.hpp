/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaegan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:34:52 by bmaegan           #+#    #+#             */
/*   Updated: 2021/11/22 17:35:51 by bmaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{

public:
	Contact(void);
	~Contact(void);
	void		display(void);
	void		set_contact(void);
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	int			exists;
	
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	int		set_first_name(void);
	int		set_last_name(void);
	int		set_nickname(void);
	int		set_phone_number(void);
	int		set_darkest_secret(void);
};

#endif
