/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyClass.cpp
 * Author: Jamie
 * 
 * Created on November 30, 2016, 1:12 PM
 */

#include "MyClass.h"
using namespace std;

void MyClass::logic(int *grid, int *dir)
{
    int x = 4;
    int y = 4;
    int rounds;
    cout << "state number of rounds";
    cin >> rounds;
    for (int i = 0; i < rounds; i++)
    {
        int newround;
        cout << " ";
        cin >> newround;
        for (int t = 0; t < 10; t++)
        {
            cout << grid[t];
        }
    }
}
