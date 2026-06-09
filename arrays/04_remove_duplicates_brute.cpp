/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Remove Duplicates from Sorted Array                        ║
 ║  Approach: Brute Force (Using Set)                          ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(NlogN)                                ║
 ║  Space Complexity : O(N)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
#include <set>
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
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    int idx = 0;
    for (auto it : s)
    {
        a[idx] = it;
        idx++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
