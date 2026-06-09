// Problem: Count Subarrays with Sum Equals K
// Approach: Optimal (Prefix Sum + HashMap)
// Time Complexity: O(N)
// Space Complexity: O(N)
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int prefixSum = 0;
    int cnt = 0;
    int k = 3;
    for (int i = 0; i < 10; i++)
    {
        prefixSum += a[i];
        int remove = prefixSum - k;
        cnt += mpp[remove];
        mpp[prefixSum]++;
    }
    cout << cnt << endl ;
}
