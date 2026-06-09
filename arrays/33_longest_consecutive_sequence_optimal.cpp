// Problem: Longest Consecutive Sequence
// Approach: Optimal (Unordered Set)
// Time Complexity: O(3N)
// Space Complexity: O(N)
#include <iostream>
#include <unordered_set>
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
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    int x;
    int cnt = 0;
    int longest = INT_MIN;
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    cout << longest << endl;
    return 0;
}
