/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:55:47 by snair             #+#    #+#             */
/*   Updated: 2022/12/14 15:50:27 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
//#define MAX_VAL 5

int main(void)
{
	{
		std::cout << "Test 1" << std::endl;
		Array<float> arrFloat(4);
		for (unsigned i = 0; i < arrFloat.size(); i++)
			arrFloat[i] = i + 1.1;
		std::cout << arrFloat;
		try
		{
			std::cout << arrFloat[5] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << arrFloat[4] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	{
		std::cout << "Test 2 copy constructor" << std::endl;
		Array<std::string> arrString(3);
		arrString[0] = "Testing";
		arrString[1] = "Copy";
		arrString[2] = "Constructor";
		std::cout << "arrString: " << std::endl;
		std::cout << arrString;
		std::cout << "copyString: " << std::endl;
		Array<std::string> copyString(arrString);
		std::cout << copyString;
		arrString[0] = "Changing";
		std::cout << "arrString after change: " << std::endl;
		std::cout << arrString;
		std::cout << "copyString after change: " << std::endl;
		std::cout << copyString;
		try
		{
			std::cout << arrString[5] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << copyString[0] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}
	std::cout << std::endl;
	{
		std::cout << "Test 3 assignment operator" << std::endl;
		Array<int> arrInt(4);
		srand(time(NULL));
		for (unsigned int i = 0; i < arrInt.size(); i++)
		{
			const int value = rand();
			arrInt[i] = value;
		}
		Array<int> arrAssignment;
		arrAssignment = arrInt;
		std::cout << "arrInt: " << std::endl << arrInt;
		std::cout << "arrAssignment: " << std::endl << arrAssignment;
		arrAssignment[2] = 54321;
		arrAssignment[3] = 12345;
		std::cout << "arrInt after change: " << std::endl << arrInt;
		std::cout << "arrAssignment after change: " << std::endl << arrAssignment;

	}
	std::cout << std::endl;
	{
		std::cout << "Test 4 const" << std::endl;
		const Array<std::string> arrConst(3);
		std::cout << arrConst;
		//arrConst[2] = "only index filled";
		 
	}
}

/*int main(void)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << "numbers: " << numbers[i] << std::endl;
		std::cout << "mirror: " << mirror[i] << std::endl;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		std::cout << "tmp: " << tmp;
		std::cout << "test: " << test;
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
		std::cout << "numbers: " << numbers[i] << std::endl;
		std::cout << "mirror: " << mirror[i] << std::endl;
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
	return 0;
}*/