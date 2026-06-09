/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Missing Number in Array                                    ║
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
    int n1;
    cin >> n1;
    int a[n1];
    for (int i = 0; i < n1 - 1; i++)
    {
        cin >> a[i];
    }
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < n1 - 1; i++)
    {
        xor1 = xor1 ^ (i + 1);
        xor2 = xor2 ^ a[i];
    }
    xor1 = xor1 ^ n1;
    int ans = xor1 ^ xor2;
    cout << ans << endl ;
    return 0;
}
