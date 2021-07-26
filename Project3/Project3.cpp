// Project3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{

    int a[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = i + j;
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n" << "What is the date of the month today?\n";
    int dayM, sum = 0;
    cin >> dayM;
    dayM %= 5;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == dayM) {
                sum += a[i][j];
            }
        }
    }

    cout << sum;
    
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
