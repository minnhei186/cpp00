/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:41:21 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/27 13:14:34 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int j;

	if (argc == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (argv[i])
		{
			j=0;
			while(argv[i][j])
			{
				std::cout<<(char)toupper((unsigned char)argv[i][j]);
				j++;
			}
			if(argv[i+1])
				std::cout<<' ';
			i++;
		}
	}
	std::cout<<std::endl;
	return (EXIT_SUCCESS);
}
