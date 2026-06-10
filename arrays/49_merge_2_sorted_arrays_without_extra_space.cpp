#include <bits/stdc++.h>
using namespace std;
// optimal approach

int main()
{

    int arr1[] = {1, 2, 3, 4};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {0, 3, 4, 5, 9};
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int left = n - 1;
    int right = 0;

    while (left >= 0 && right < m)
    {
        if (arr1[left] > arr2[right])
        {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else
        {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

        for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}