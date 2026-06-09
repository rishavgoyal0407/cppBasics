// Problem: Pascal Triangle - Generate Full Triangle
// Approach: Row Generation
// Time Complexity: O(R^2)
// Space Complexity: O(R^2)
#include <iostream>
#include <vector>
using namespace std;

vector<int> generateRow(int row)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int i = 1; i < row; i++)
    {
        ans = ans * (row - i);
        ans = ans / i;
        ansRow.push_back(ans);
    }
    return ansRow;
}

int main()
{
    int row;
    cin >> row;
    vector<vector<int>> ans;
    for (int i = 1; i <= row; i++)
    {
        ans.push_back(generateRow(i));
    }
    for (auto row : ans)
    {
        for (auto val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
