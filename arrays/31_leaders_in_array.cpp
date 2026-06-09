// Problem: Leaders in an Array
// Approach: Optimal (Right to Left Scan)
// Time Complexity: O(N)
// Space Complexity: O(N)
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = INT_MIN;
    vector<int> vec;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            vec.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
