/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havyilma <havyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:29:52 by havyilma          #+#    #+#             */
/*   Updated: 2023/11/07 12:32:16 by havyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
/*
// new || delete
int main()
{
	int *ptr = nullptr;
	int *ptr = new int; // int *ptr = new int[bilmemkaç];
	*ptr = 5;
	delete ptr;  // delete [] ptr // dangling referans: deleteden sonra ptr yi kullanamazsın ptr2 = ptr1 demiş olsan ptr1i delete etsen de hata
}

int main()
{
	int a[] = {10,20,30,40};
	for (int item:a)
		cout << item * 2 << endl;
}
*/
class Student{
public:
	string name;
	void tellName(){
		cout << "benim adım " << name << endl;
	};
				
};

int main()
{
	Student student1;
	student1.name = "Berre";
	student1.tellName();
	
	return (0);
}
