// Problem: Two Sum Problem (Sorted Array)
// Approach: Optimal (Two Pointer / Greedy)
// Time Complexity: O(N)
// Space Complexity: O(1)

#include <iostream>
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
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int a = arr[left];
        int b = arr[right];
        int sum = a + b;
        if (sum == target)
        {
            cout << left << " " << right << endl;
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return 0;
}
