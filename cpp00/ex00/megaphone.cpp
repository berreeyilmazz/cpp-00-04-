/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:23:11 by havyilma          #+#    #+#             */
/*   Updated: 2023/12/02 12:29:30 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
//using namespace std;

// https://youtu.be/-UWIpVIcz_0?si=kz24Cx2rxO3LR4CN

int main(int ac, char **av)
{
/*	cout << "Hello world!" << endl;
	int a = 422;
	cout << "the value of a:" << a << endl;
	cout << "toplam: " << toplam << endl;
	cout << "toplam: " << float(423 / 20);  a *= 2;
	int x,y,z;
	cout << "birinci sayıyı giriniz : ";
	cin >> x;
	cout << "ikinci sayıyı giriniz: ";
	cin >> y;
	cout << "toplam : " << x + y; 
*/
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
