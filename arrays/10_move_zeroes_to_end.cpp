// Problem: Move All Zeroes to End of Array
// Approach: Optimal (Two Pointer)
// Time Complexity: O(N)
// Space Complexity: O(1)
#include <iostream>
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
    int idx = -1;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)
        {
            idx = j;
            break;
        }
    }
    for (int i = idx + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[idx], a[i]);
            idx++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
