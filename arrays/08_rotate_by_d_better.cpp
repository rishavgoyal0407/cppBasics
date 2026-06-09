/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Rotate Array by D Places                                   ║
 ║  Approach: Better (Using Temp Array)                        ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N)                                    ║
 ║  Space Complexity : O(D)                                    ║
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
    int d;
    cin >> d;
    d=d%n;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = a[i];
    }
    for (int i = d; i < n; i++)
    {
        a[i - d] = a[i];
    }
    for (int i = 0; i < d; i++)
    {
        a[n - d + i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
