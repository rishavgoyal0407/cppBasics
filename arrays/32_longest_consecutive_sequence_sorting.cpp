// Problem: Longest Consecutive Sequence
// Approach: Better (Sorting)
// Time Complexity: O(NlogN)
// Space Complexity: O(1)
#include <iostream>
#include <algorithm>
#include <climits>
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
    sort(a, a + n);
    int longest = 1;
    int countArr = 0;
    int lastSmaller = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - 1 == lastSmaller)
        {
            countArr++;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller)
        {
            countArr = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, countArr);
    }
    cout << longest << endl ;
    return 0;
}
