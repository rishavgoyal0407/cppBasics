// Problem: Rotate Array by D Places
// Approach: Brute Force
// Time Complexity: O(N*D)
// Space Complexity: O(1)
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
    for (int k = 0; k < d; k++)
    {
        int temp = a[0];
        for (int i = 0; i < n; i++)
        {
            a[i - 1] = a[i];
        }
        a[n - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
