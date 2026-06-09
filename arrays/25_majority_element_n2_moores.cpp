/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Majority Element (> N/2 times)                             ║
 ║  Approach: Optimal (Moore's Voting Algorithm)               ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N)                                    ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 3, 3, 3, 1, 3, 2};
    int el;
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (count == 0)
        {
            el = a[i];
            count = 1;
        }
        else if (a[i] == el)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << el;
    return 0;
}
