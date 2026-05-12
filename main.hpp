#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <iomanip>
using namespace std;

void shiftleft(int[], int, int);
void printout(int[], int);

void shiftleft(int number[], int SIZE, int count)
{
    for (int i = 0; i < count; i++)
    {
        int temp = number[0];
        for (int j = 0; j < SIZE - 1; j++)
        {
            number[j] = number[j + 1];
        }
        number[SIZE - 1] = temp;
    }
}

void printout(int number[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << setw(5) << number[i];
    cout << endl;
    return;
}

#endif