/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Maximum Consecutive Ones                                   ║
 ║  Approach: Linear Scan                                      ║
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
    int maxfreq = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
        }
        if (a[i] != 1)
        {
            if (count > maxfreq)
            {
                maxfreq = count;
                count = 0;
            }
            count = 0;
        }
    }
    cout << maxfreq << endl;
    return 0;
}
