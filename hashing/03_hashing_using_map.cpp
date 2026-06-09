// Problem: Hashing Using Map
// Approach: Map (Ordered)
// Time Complexity: O(NlogN + QlogN)
// Space Complexity: O(N)
#include <bits/stdc++.h>
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
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[a[i]]++;
    }
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << mpp[x] << endl;
    }
    return 0;
}
