/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avieira <avieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 00:04:02 by avieira           #+#    #+#             */
/*   Updated: 2021/11/30 15:18:45 by avieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Array.hpp"

#define MAX_VAL 750

int main(void)
{
	//Main provided
	/*
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
	for (int i = 0; i < MAX_VAL; i++)
	{
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	try
	{
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;*/

	Array<int> intArray;
	Array<std::string> stringArray(5);
	Array<std::string> stringArrayAssign;

	std::cout << "\n\n";

	std::cout << "--Using operator[] to fill stringArray" << std::endl;
	stringArray[0] = "Hello";
	stringArray[1] = "Wassup";
	stringArray[2] = "How";
	stringArray[3] = "U";
	stringArray[4] = "Doin";
	std::cout << "size of stringArray : " << stringArray.size() << std::endl;
	std::cout << "size of stringArrayAssign : " << stringArrayAssign.size() << std::endl;
	std::cout << "---Copy construct stringArrayCopy(stringArray)" << std::endl << std::endl;
	Array<std::string> stringArrayCopy(stringArray);
	std::cout << std::endl << "---Assign stringArrayAssign = stringArray" << std::endl;
	stringArrayAssign = stringArray;
	std::cout << "size of stringArray : " << stringArray.size() << std::endl;
	std::cout << "size of stringArrayCopy : " << stringArrayCopy.size() << std::endl;
	std::cout << "size of stringArrayAssign : " << stringArrayAssign.size() << std::endl;
	std::cout << "---Displaying stringArrayCopy and stringArrayAssign" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << stringArrayAssign[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << stringArrayCopy[i] << " ";
	std::cout << std::endl;
	std::cout << "---Change stringArray content" << std::endl;
	stringArray[0] = "Is";
	stringArray[1] = "That";
	stringArray[2] = "A";
	stringArray[3] = "Deep";
	stringArray[4] = "Copy";
	std::cout << "---Displaying again stringArray" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << stringArray[i] << " ";
	std::cout << std::endl;
	std::cout << "---Displaying again arrayStringCopy and arrayStringAssignation to prove deep copy" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << stringArrayCopy[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << stringArrayAssign[i] << " ";
	std::cout << std::endl;

	std::cout << "---Try to access negative index" << std::endl;
	try
	{
		std::cout << stringArray[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---Try to access size index" << std::endl;
	try
	{
		std::cout << stringArray[stringArray.size()] << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\n";
}