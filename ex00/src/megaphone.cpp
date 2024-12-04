/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:41:21 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/04 16:44:01 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <cstdlib>

void print_upper(char *argv)
{
	int j;

	j=0;
	while(argv[j])
	{
		std::cout<<(char)std::toupper((unsigned char)argv[j]);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (argv[i])
		{
			print_upper(argv[i]);
			if(argv[i+1])
				std::cout<<' ';
			i++;
		}
	}
	std::cout<<std::endl;
	return (EXIT_SUCCESS);
}
