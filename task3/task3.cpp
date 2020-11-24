// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <array>
#include <iostream>
#include <cstdlib>
#include <vector>

int array_rows_cols(int arr[5][5],int row,int col)
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

int main()
{
    //task3
	int row;
	int col;
	cout << "Number of rows: ";
	cin >> row;
	cout << "Number of columns: ";
	cin >> col;
	int arrayen[5][5];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arrayen[i][j] = rand() % 10;
		}
	}
    array_rows_cols(arrayen, row, col);
}