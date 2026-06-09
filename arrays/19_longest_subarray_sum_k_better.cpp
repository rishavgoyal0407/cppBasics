// Problem: Longest Subarray with Sum K
// Approach: Better (Hashing - Using Prefix Sum Map)
// Time Complexity: O(N log N)
// Space Complexity: O(N)

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int num = 3;
    int maxlen = 0;
    int sum = 0;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == num)
        {
            maxlen = max(maxlen, i + 1);
        }
        int rem = sum - num;
        if (mpp.find(rem) != mpp.end())
        {
            maxlen = max(maxlen, i - mpp[rem]);
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }
    cout << maxlen << endl;
    return 0;
}
