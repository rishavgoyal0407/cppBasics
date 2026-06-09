/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Union of Two Sorted Arrays                                 ║
 ║  Approach: Optimal (Two Pointer)                            ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N1+N2)                                ║
 ║  Space Complexity : O(N1+N2)                                ║
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
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (ans.size() == 0 || ans.back() != a[i])
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != b[j])
            {
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (ans.size() == 0 || ans.back() != a[i])
        {
            ans.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (ans.size() == 0 || ans.back() != b[j])
        {
            ans.push_back(b[j]);
        }
        j++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
