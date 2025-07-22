// sum_list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int sum = 0;
	int A[] = { 1, 2, 4, 7, 3 }; // Example array

	for (int x : A)
	{
		sum += x; // Add each element to sum
	}
	std::cout << "sum of list = " << sum << std::endl; // Output the sum
}
