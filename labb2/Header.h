#pragma once
using namespace std;

//// task 1
////bool is_sorted(int x[5])
////{	
////	int count = 0;
////	for (int i = 0; i < 6; i++)
////	{
////		if (count == 5)
////		{
////			cout << "den är ascending" << endl;
////			return true;
////		}
////		else if (x[i] == x[5 - 1])
////		{
////			count++;
////		}
////		else if (x[i] < x[i + 1])
////		{
////			count++;
////		}
////		else 
////		{
////			break;
////		}
////	}
////	cout << "den är INTE ascending" << endl;
////	return false;
////}
//
//
////task 2
//
////bool is_palindrome(char word[])
////{
////	int count = 0;
////	for (int i = 0; i < 5; i++)
////	{
////		if (word[i] == word[4-i])
////		{
////			count++;			
////		}
////	}
////	if (count >= 5)
////	{
////		cout << "it is Palindrome" << endl;
////		return true;
////	}
////	else 
////	{
////		cout << "its NOT a Palindrome" << endl;
////		return false;
////	}
////}
//
//
////task 3
//int array_rows_cols(int arr[3][3])
//{
//	int sumCol[4] = {};
//	int sumRow[4] = {};
//	int totSum = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			sumCol[i] += arr[j][i];
//			sumRow[i] += arr[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << "       "; 
//		}
//		cout << sumRow[i];
//		cout << "\n";
//	}
//	cout << "\n";
//	for (int i = 0; i < 3; i++)
//	{
//		cout << sumCol[i] << "      ";
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		totSum += sumRow[i] + sumCol[i];
//	}
//	cout << totSum;
//		
//	return 0;
//}
//
//
////task 4
//
//void swap_sort(int &a, int &b, int &c, bool &tf)
//{
//	if (tf == false)
//	{
//		if (a > b && a > c)
//		{
//			if (b > c)
//			{
//				cout << a << " " << b << " " << c << endl;
//			}
//			else
//			{
//				cout << a << " " << c << " " << b << endl;
//			}
//		}
//		else if (b > c && b > a)
//		{
//			if (c > a)
//			{
//				cout << b << " " << c << " " << a << endl;
//			}
//			else
//			{
//				cout << b << " " << a << " " << c << endl;
//			}
//		}
//		else if (c > a && c > b)
//		{
//			if (b > a)
//			{
//				cout << c << " " << b << " " << a << endl;
//			}
//			else 
//			{
//				cout << c << " " << a << " " << b << endl;
//			}
//		}
//	}
//	if (tf == true)
//	{
//		if (a < b && a < c)
//		{
//			if (b < c)
//			{
//				cout << a << " " << b << " " << c << endl;
//			}
//			else
//			{
//				cout << a << " " << c << " " << b << endl;
//			}
//		}
//		else if (b < c && b < a)
//		{
//			if (c < a)
//			{
//				cout << b << " " << c << " " << a << endl;
//			}
//			else
//			{
//				cout << b << " " << a << " " << c << endl;
//			}
//		}
//		else if (c < a && c < b)
//		{
//			if (b < a)
//			{
//				cout << c << " " << b << " " << a << endl;
//			}
//			else
//			{
//				cout << c << " " << a << " " << b << endl;
//			}
//		}
//	}
//}
//
//
////task 5
//
//void shrink_array(int arr[])
//{
//	int arrSum[10];
//	int count = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (i%2 == 0)
//		{
//			arrSum[i] = arr[i] + arr[i + 1];
//		}
//		else
//		{
//			arrSum[i] = 0;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		if (arrSum[i] != 0)
//		{
//			swap(arrSum[count++], arrSum[i]);
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arrSum[i] << " ";
//	}
//}
//
//
////task6
//
//void initialise()
//{
//	 
//}