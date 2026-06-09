/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Three Sum Problem                                          ║
 ║  Approach: Brute Force (Triple Nested Loops)                ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N^3)                                  ║
 ║  Space Complexity : O(number of triplets)                   ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(a) / sizeof(a[0]);
    set<vector<int>> set;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] + a[k] == 0)
                {
                    vector<int> temp = {a[i], a[j], a[k]};
                    sort(temp.begin(), temp.end());
                    set.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(set.begin(), set.end());
    for (auto row : ans)
    {
        for (auto el : row)
        {
            cout << el << " ";
        }
        cout << "\n" ;
    }
    return 0;
}
