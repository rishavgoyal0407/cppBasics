// Problem: Rotate Array by D Places
// Approach: Optimal (Reversal Algorithm)
// Time Complexity: O(N)
// Space Complexity: O(1)
#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int a[], int low, int high)
{
    while (low <= high)
    {
        swap(a[low], a[high]);
        low++;
        high--;
    }
}

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
    d = d % n;
    reverse(a, 0, d - 1);
    reverse(a, n - d - 1, n - 1);
    reverse(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
