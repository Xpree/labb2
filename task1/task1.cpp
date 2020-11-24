// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <array>
#include <iostream>
#include <cstdlib>
#include <vector>

bool is_sorted(int x[5])
{	
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		if (count == 5)
		{
			cout << "den är ascending" << endl;
			return true;
		}
		else if (x[i] == x[5 - 1])
		{
			count++;
		}
		else if (x[i] < x[i + 1])
		{
			count++;
		}
		else 
		{
			break;
		}
	}
	cout << "den är INTE ascending" << endl;
	return false;
}

int main()
{
    //task1
    int arr[5] = { 1,2,3,5,7 };
    is_sorted(arr);
}
