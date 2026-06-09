// Problem: Max and Min Frequency Element
// Approach: Map Based
// Time Complexity: O(NlogN)
// Space Complexity: O(N)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxFreq = 0;
    int minFreq = n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[a[i]]++;
    }
    int maxFreqElement = a[0];
    int minFreqElement = a[0];
    for (auto it : mpp)
    {
        if (it.second > maxFreq)
        {
            maxFreq = it.second;
            maxFreqElement = it.first;
        }
        if (it.second < minFreq)
        {
            minFreq = it.second;
            minFreqElement = it.first;
        }
    }
    cout << "Element with max frequency: " << maxFreqElement << " and frequency is: " << maxFreq << endl;
    cout << "Element with min frequency: " << minFreqElement << " and frequency is: " << minFreq << endl;
    return 0;
}
