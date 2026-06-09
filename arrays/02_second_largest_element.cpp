/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Second Largest Element in an Array                         ║
 ║  Approach: Brute Force (Two Pass)                           ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N)                                    ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
#include <climits>
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
    int largest = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    int secondLargest=INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }
    cout << secondLargest << endl ;
    return 0;
}
