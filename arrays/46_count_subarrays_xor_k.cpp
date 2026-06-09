/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Count Subarrays with XOR Equals K                          ║
 ║  Approach: Optimal (Prefix XOR + HashMap)                   ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N)                                    ║
 ║  Space Complexity : O(N)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> mpp;
    int prefixXor = 0;
    mpp[prefixXor] = 1;
    int k = 3;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        prefixXor = prefixXor ^ arr[i];
        int x = prefixXor ^ k;
        cnt += mpp[x];
        mpp[prefixXor]++;
    }
    cout << cnt << endl;
    return 0;
}
