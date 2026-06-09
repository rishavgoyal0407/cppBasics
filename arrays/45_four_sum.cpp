// Problem: Four Sum Problem
// Approach: Optimal (Sort + Two Pointer)
// Time Complexity: O(N^3)
// Space Complexity: O(number of quads)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int target = 8;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (j != i + 1 && a[j] == a[j - 1])
            {
                continue;
            }
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                int sum = a[i] + a[j] + a[k] + a[l];
                if (sum > target)
                {
                    l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                {
                    vector<int> temp = {a[i] ,a[j] , a[k] ,a[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && a[k] == a[k - 1])
                    {
                        k++;
                    }
                    while (k < l && a[l] == a[l + 1])
                    {
                        l--;
                    }
                }
            }
        }
    }
    for (auto row : ans)
    {
        for (auto el : row)
        {
            cout << el << " ";
        }
        cout << "\n";
    }
    return 0;
}
