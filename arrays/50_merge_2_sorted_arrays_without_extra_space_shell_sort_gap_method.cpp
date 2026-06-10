#include <bits/stdc++.h>
using namespace std;

void swapElement(int arr1[], int arr2[], int idx1, int idx2)
{

    if (arr1[idx1] > arr2[idx2])
    {
        swap(arr1[idx1], arr2[idx2]);
    }
}

int main()
{

    int arr1[] = {1, 2, 3, 4};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {0, 3, 4, 5, 9};
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int len = (n + m);
    int gap = (len / 2) + (len % 2);

    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;

        while (right < len)
        {
            if (left < n && right >= n)
            {
                swapElement(arr1, arr2, left, right - n);
            }
            else if (left >= n)
            {
                swapElement(arr2, arr2, left - n, right - n);
            }
            else
            {
                swapElement(arr1, arr1, left, right);
            }

            left++;
            right++;
        }

        if (gap == 1)
        {
            break;
        }

        gap = (gap / 2) + (gap % 2);
    }

    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";

    for (int i = 0; i < m; i++)
        cout << arr2[i] << " ";

    return 0;
}
