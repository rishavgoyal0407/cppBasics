/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Intersection of Two Sorted Arrays                          ║
 ║  Approach: Brute Force (Visited Array)                      ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N1*N2)                                ║
 ║  Space Complexity : O(N2)                                   ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    vector<int> ans;
    int vis[n2] = {0};
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j] && vis[j] == 0)
            {
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if (b[j] > a[i])
            {
                break;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
