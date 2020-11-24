// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <array>
#include <iostream>
#include <cstdlib>
#include <vector>

void shrink_array(int arr[])
{
	int arrSum[10];
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			arrSum[i] = arr[i] + arr[i + 1];
		}
		else
		{
			arrSum[i] = 0;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (arrSum[i] != 0)
		{
			swap(arrSum[count++], arrSum[i]);
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arrSum[i] << " ";
	}
}

int main()
{
    //task 5
    int arr[] = { 5,5,7,6,2,2,11,11,5,7 };
    shrink_array(arr);
}
