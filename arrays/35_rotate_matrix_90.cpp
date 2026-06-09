/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Rotate Matrix Image by 90 Degrees                          ║
 ║  Approach: Optimal (Transpose + Reverse)                    ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N/2 * N/2) + O(N/2)                  ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int row;
    int column;
    cin >> row;
    cin >> column;
    int a[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i+1; j < column; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        int left = 0;
        int right = column - 1;
        while (left < right)
        {
            swap(a[i][left], a[i][right]);
            left++;
            right--;
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
