/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Three Sum Problem                                          ║
 ║  Approach: Better (HashSet)                                 ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N^2 * logN)                           ║
 ║  Space Complexity : O(N + number of triplets)               ║
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
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        set<int> set;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(a[i] + a[j]);
            if (set.find(third) != set.end())
            {
                vector<int> temp = {a[i], a[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            set.insert(a[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
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
