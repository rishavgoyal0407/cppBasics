/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Set Matrix Zeroes                                          ║
 ║  Approach: Optimal (In-place Marking)                       ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N^2)                                  ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    int column;
    cin >> row;
    cin >> column;
    int a[row][column];
    int col0 = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n" << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (a[i][j] == 0)
            {
                a[i][0] = 0;
                if (j != 0)
                {
                    a[0][j] = 0;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < column; j++)
        {
            if (a[i][j] != 0)
            {
                if (a[0][j] == 0 || a[i][0] == 0)
                {
                    a[i][j] = 0;
                }
            }
        }
    }
    if (a[0][0] == 0)
    {
        for (int i = 0; i < row; i++)
        {
            a[0][i] = 0;
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < column; i++)
        {
            a[i][0] = 0;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n" << endl;
    }
    return 0;
}
