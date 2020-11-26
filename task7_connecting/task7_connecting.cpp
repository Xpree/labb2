// task7_connecting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <array>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <Source.cpp>

int main()
{
    bool on = true;
    while (on)
    {
        int inp;
        cout << "Choose tasks (1-6): ";
        cin >> inp;
        //task 1
        int arr[5] = { 1,2,4,5,7 };
        //task 2
        char word[] = { 'm', 'a', 'd', 'a', 'm' };
        //task 3
        int row;
        int col;
        int arrayen[5][5];
        //task 4
        int a;
        int b;
        int c;
        bool tf;
        //task 5
        int arr2[] = { 5,5,7,6,2,2,11,11,5,7 };
        switch (inp){
            case 1: 
                is_sorted(arr);
                break;
            case 2:
                is_palindrome(word);
                break;
            case 3:
                cout << "Number of rows: ";
                cin >> row;
                cout << "Number of columns: ";
                cin >> col;
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        arrayen[i][j] = rand() % 10;
                    }
                }
                array_rows_cols(arrayen, row, col);
                cout << endl;
                break;
            case 4:
                cout << "Give a (0 to quit): ";
                cin >> a;
                if (a == 0)
                {
                    break;
                }
                cout << "Give b (0 to quit): ";
                cin >> b;
                cout << "Give c (0 to quit): ";
                cin >> c;
                cout << "Sort ascending/descending (1/0): ";
                cin >> tf;
                swap_sort(a, b, c, tf);
                break;
            case 5:
                shrink_array(arr2);
                cout << endl;
                break;
            case 6:
                initialise();
                break;
            default:
                cout << "NO SUCH TASK!";
                on = false;
                break;
        }
    }
    
}
