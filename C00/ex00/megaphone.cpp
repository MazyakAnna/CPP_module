/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaegan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:11:21 by bmaegan           #+#    #+#             */
/*   Updated: 2021/11/20 14:29:10 by bmaegan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int			i;
	size_t		j;
	std::string	s;

	i = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		i = argc;
	}
	while (i < argc)
	{
		j = 0;
		s = argv[i];
		while (j < s.size())
		{
			s[j] = std::toupper(s[j]);
			j++;
		}
		std::cout << s;
		i++;
	}
	std::cout << std::endl;
	return (0);
}
