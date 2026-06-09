/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Best Time to Buy and Sell Stock                            ║
 ║  Approach: Optimal (Dynamic Programming)                    ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N)                                    ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {7, 1, 5, 3, 6, 4};
    int mini = a[0];
    int maxi = INT_MIN;
    int cost;
    int profit = 0;
    for (int i = 1; i < 6; i++)
    {
        cost = a[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, a[i]);
    }
    cout << profit;
    return 0;
}
