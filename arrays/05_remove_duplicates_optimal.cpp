// Problem: Remove Duplicates from Sorted Array
// Approach: Optimal (Two Pointer)
// Time Complexity: O(N)
// Space Complexity: O(1)
#include <iostream>
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
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] != a[i])
        {
            a[i + 1] = a[j];
            i++;
        }
    }
    for (int k = 0; k < i + 1; k++)
    {
        cout << a[k] << " ";
    }
    return 0;
}
