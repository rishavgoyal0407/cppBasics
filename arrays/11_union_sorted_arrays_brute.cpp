/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Union of Two Sorted Arrays                                 ║
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
    int a1[n], a2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s.insert(a2[i]);
    }
    for (auto it : s)
    {
        cout << it << " ";
    }
    return 0;
}
