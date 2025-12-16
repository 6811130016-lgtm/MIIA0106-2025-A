// LAB0502.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapRef(int& a , int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "Before Swap is" << endl;
    cout << a << endl;
    cout << b << endl;

    swapValue(a, b);
    cout << "Swap Value is" << endl;
    cout << a << endl;
    cout << b << endl;

    swapRef(a, b);
    cout << "Swap Ref is" << endl;
    cout << a << endl;
    cout << b << endl;

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
