// Problem: Bubble Sort
// Approach: Adjacent Swap
// Time Complexity: O(N^2) worst/avg, O(N) best
// Space Complexity: O(1)

#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool didSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                didSwap = true;
            }
        }
        if (!didSwap)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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
    bubbleSort(a, n);
    return 0;
}
