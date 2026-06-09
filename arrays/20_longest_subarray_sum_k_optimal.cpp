/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Longest Subarray with Sum K (Positives Only)               ║
 ║  Approach: Optimal (Sliding Window)                         ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(2N)                                   ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 1, 1, 1, 1, 3, 3};
    int i = 0;
    int j = 0;
    int len = 0;
    int num = 6;
    int sum = 0;
    while (i < 9 && j < 9)
    {
        sum += a[j];
        if (sum == num)
        {
            len = max(len, j - i + 1);
        }
        while (sum > num && i<=j)
        {
            sum -= a[i];
            i++;
        }
        j++;
    }
    cout << len << endl;
    return 0;
}
