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

int array_rows_cols(int arr[5][5], int row, int col)
{
	int sumCol[5] = {};
	int sumRow[5] = {};
	int totSum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sumRow[i] += arr[i][j];
		}
	}
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			sumCol[i] += arr[j][i];
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "       ";
		}
		cout << sumRow[i];
		cout << "\n";
	}
	cout << "\n";
	for (int i = 0; i < col; i++)
	{
		cout << sumCol[i] << "      ";
	}
	for (int i = 0; i < 5; i++)
	{
		totSum += sumRow[i] + sumCol[i];
	}
	cout << totSum;

	return 0;
}

void swap_sort(int& a, int& b, int& c, bool& tf)
{
	if (tf == false)
	{
		if (a > b && a > c)
		{
			if (b > c)
			{
				cout << a << " " << b << " " << c << endl;
			}
			else
			{
				cout << a << " " << c << " " << b << endl;
			}
		}
		else if (b > c && b > a)
		{
			if (c > a)
			{
				cout << b << " " << c << " " << a << endl;
			}
			else
			{
				cout << b << " " << a << " " << c << endl;
			}
		}
		else if (c > a && c > b)
		{
			if (b > a)
			{
				cout << c << " " << b << " " << a << endl;
			}
			else
			{
				cout << c << " " << a << " " << b << endl;
			}
		}
	}
	if (tf == true)
	{
		if (a < b && a < c)
		{
			if (b < c)
			{
				cout << a << " " << b << " " << c << endl;
			}
			else
			{
				cout << a << " " << c << " " << b << endl;
			}
		}
		else if (b < c && b < a)
		{
			if (c < a)
			{
				cout << b << " " << c << " " << a << endl;
			}
			else
			{
				cout << b << " " << a << " " << c << endl;
			}
		}
		else if (c < a && c < b)
		{
			if (b < a)
			{
				cout << c << " " << b << " " << a << endl;
			}
			else
			{
				cout << c << " " << a << " " << b << endl;
			}
		}
	}
}

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

void initialise()
{
	vector <string> names = {};
	while (true)
	{
		int inp;
		cout << "1. initialise database" << endl;
		cout << "2. insert" << endl;
		cout << "3. search" << endl;
		cout << "4. delete" << endl;
		cout << "5. print" << endl;
		cout << "6. quit" << endl;
		cout << "choose option: ";
		cin >> inp;
		if (inp == 1)
		{
			names.clear();
		}
		if (inp == 2)
		{
			string inpName;
			while (true)
			{
				cout << "enter a name: ";
				cin >> inpName;
				if (inpName == "q" || inpName == "Q")
				{
					break;
				}
				else
				{
					names.insert(names.begin(), inpName);
					cout << "\n";
				}
			}
		}
		if (inp == 3)
		{
			string inp;
			cout << "search name: ";
			cin >> inp;
			for (int i = 0; i < names.size(); i++)
			{
				string name = names[i];
				if (name.find(inp) != std::string::npos)
				{
					cout << name << endl;
				}
			}
		}
		if (inp == 4)
		{
			string inp;
			cout << "enter a name you want to delete ";
			cin >> inp;
			for (int i = 0; i < names.size(); i++)
			{
				if (names[i] == inp)
				{
					names[i].erase();
				}
			}
		}
		if (inp == 5)
		{
			for (int i = 0; i < names.size(); i++)
			{
				cout << names[i] << endl;
			}
		}
		if (inp == 6)
		{
			break;
		}
	}
}

//task 8
//lab can improve by making it more clear how to tasks should be done
//like.. do they need to be in a function and what to send in the function.
//
//I learnt that c++ don't have a len function.
//I think the hardest part yet is the memmory adresses

int main()
{
	
}