/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Majority Element Part-2 (> N/3 times)                      ║
 ║  Approach: Optimal (Extended Moore's Voting)                 ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(2N)                                   ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 1, 1, 3, 1, 3, 5, 3};
    int mini = 3;
    int el1, el2;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < 8; i++)
    {
        if (cnt1 == 0 && el2 != a[i])
        {
            cnt1 = 1;
            el1 = a[i];
        }
        else if (cnt2 == 0 && el1 != a[i])
        {
            cnt2 = 1;
            el2 = a[i];
        }
        else if (el1 == a[i])
            cnt1++;
        else if (el2 == a[i])
            cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    int cnt3 = 0;
    int cnt4 = 0;
    for (int i = 0; i < 8; i++)
    {
        if (el1 == a[i])
        {
            cnt3++;
        }
        if (el2 == a[i])
            cnt4++;
    }
    if (cnt3 >= mini)
    {
        cout << el1 << " ";
    }
    if (cnt4 >= mini)
        cout << el2 << " ";
    return 0;
}
