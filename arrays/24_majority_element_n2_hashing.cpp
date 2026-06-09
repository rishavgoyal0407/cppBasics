/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Majority Element (> N/2 times)                             ║
 ║  Approach: Better (Hashing)                                 ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N) + O(NlogN)                         ║
 ║  Space Complexity : O(N)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int a[] = {2, 3, 3, 3, 1, 3, 2};
    map<int, int> mpp;
    for (int i = 0; i < 7; i++)
    {
        mpp[a[i]] += 1;
    }
    for (auto it : mpp)
    {
        if (it.second > 7 / 2)
        {
            cout << it.first << endl;
        }
    }
    return 0;
}
