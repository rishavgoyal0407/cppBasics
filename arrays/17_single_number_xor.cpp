/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Find Single Number (Others Appear Twice)                   ║
 ║  Approach: Optimal (XOR)                                    ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N)                                    ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
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
    int xor1 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ a[i];
    }
    cout << xor1 << endl;
    return 0;
}
