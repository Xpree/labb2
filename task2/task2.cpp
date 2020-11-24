// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <array>
#include <iostream>
#include <cstdlib>
#include <vector>

bool is_palindrome(char word[])
{
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (word[i] == word[4 - i])
		{
			count++;
		}
	}
	if (count >= 5)
	{
		cout << "it is Palindrome" << endl;
		return true;
	}
	else
	{
		cout << "its NOT a Palindrome" << endl;
		return false;
	}
}
int main()
{
    //task2
    char word[] = { 'm', 'a', 'd', 'a', 'm' };
    is_palindrome(word);
}
