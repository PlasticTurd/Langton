#include "MyClass.h"
#include <iostream>
using namespace std;

void MyClass::logic(int grid[10][10], int dir[4][2])
{
    int x = 4; //sets the starting position of the ant on the x axis
    int y = 4; //sets the starting position of the and on the y axis
    int rounds; //to 24 - obtains user input for the number of rounds to run
    cin >> rounds;
    int dir2 = 0;
    int trail;
    
    for (int i = 0; i < rounds; i++)
    {
        int x3 = dir[dir2][0];
        int y3 = dir[dir2][1];
        int x2 = x - x3;
        int y2 = y - y3;

        if (grid[x2][y2] == 0)
        {
            dir2--;
            trail = 1;
        }

        if (grid[x2][y2] == 1)
        {
            dir2++;
            trail = 0;
        }
        
        if (dir2 > 3)
            {
                dir2 = 0;
            }

        if (dir2 < 0)
            {
                dir2 = 3;
            }
        
        grid[x2][y2] = 2;
        grid[x][y] = trail;
        x = x2;
        y = y2;
        cin.get();
        {for (int i = 0; i < 10; i++)
             {
                 for (int t = 0; t < 10; t++)
                 {
                     cout << grid[i][t] << " ";
                 }
                 cout << endl;
             }
        }
    }
}

    

