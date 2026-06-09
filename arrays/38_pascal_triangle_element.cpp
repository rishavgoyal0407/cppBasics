/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Pascal Triangle - Find Element at (R,C)                    ║
 ║  Approach: Formula (nCr)                                    ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(C)                                    ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r;
    cin >> c;
    int res = 1;
    for (int i = 0; i < c - 1; i++)
    {
        res = res * (r - 1 - i);
        res = res / (i + 1);
    }
    cout << res << endl;
}
