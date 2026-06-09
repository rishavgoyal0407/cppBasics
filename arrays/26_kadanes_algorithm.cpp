// Problem: Maximum Subarray Sum (Kadane's Algorithm)
// Approach: Optimal (Kadane's)
// Time Complexity: O(N)
// Space Complexity: O(1)
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int maxi = INT16_MIN;
    int sum = 0;
    int start = -1;
    int end = -1;
    int ansStart = -1;
    for (int i = 0; i < 8; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += a[i];
        if (sum > maxi)
        {
            maxi=sum;
            ansStart = start;
            end = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxi << " " << ansStart << " " << end ;
}
