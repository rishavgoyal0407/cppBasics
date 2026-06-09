/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Intersection of Two Sorted Arrays                          ║
 ║  Approach: Optimal (Two Pointer)                            ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N1+N2)                                ║
 ║  Space Complexity : O(1)                                    ║
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
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
