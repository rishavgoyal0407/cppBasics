// Problem: Longest Subarray with Sum K
// Approach: Brute Force
// Time Complexity: O(N^2)
// Space Complexity: O(1)
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int num = 3;
    int len = 0;
    int sum;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == num)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    cout << len << endl;
    return 0;
}
