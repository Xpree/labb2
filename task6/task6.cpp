// task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <array>
#include <iostream>
#include <vector>
#include <string>

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

int main()
{
    //task6
    initialise();
}
