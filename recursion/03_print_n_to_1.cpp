/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Print N to 1                                               ║
 ║  Approach: Basic Recursion                                  ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N)                                    ║
 ║  Space Complexity : O(N)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
using namespace std;

void revNum(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    revNum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    revNum(n);
    return 0;
}
