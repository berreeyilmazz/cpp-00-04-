/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:23:11 by havyilma          #+#    #+#             */
/*   Updated: 2023/12/18 20:53:28 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// https://youtu.be/-UWIpVIcz_0?si=kz24Cx2rxO3LR4CN

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << static_cast<char>(toupper(av[i][j]));
				j++;
			}
			i++;
		}
	}
	std::cout << std::endl;
	return 0;
}
