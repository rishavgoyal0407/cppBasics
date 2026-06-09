// Problem: Spiral Traversal of Matrix
// Approach: Simulation (Boundary Shrinking)
// Time Complexity: O(R * C)
// Space Complexity: O(R * C)
#include <iostream>
#include <vector>
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
    int top = 0;
    int left = 0;
    int right = column - 1;
    int bottom = row - 1;
    vector<int> vec;
    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            vec.push_back(a[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            vec.push_back(a[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                vec.push_back(a[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                vec.push_back(a[i][left]);
            }
            left++;
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
