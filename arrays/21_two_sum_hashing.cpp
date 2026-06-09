// Problem: Two Sum Problem
// Approach: Better (Hashing / Map)
// Time Complexity: O(NlogN)
// Space Complexity: O(N)
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end())
        {
            cout << more + a << endl;
        }
        mpp[a]=i;
    }
    return 0;
}
