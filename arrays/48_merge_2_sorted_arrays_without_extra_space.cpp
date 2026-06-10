#include <bits/stdc++.h>
using namespace std;
// Time Complexity-: O(nlogn)+O(mlogm)+O(n+m)
// Space Complexity-: O(n+m)
int main()
{

    int arr1[] = {1, 6, 3, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {5, 2, 7, 8, 4};
    int m = sizeof(arr2) / sizeof(arr2[0]);
    long long arr3[n + m];

    int left = 0;
    int right = 0;
    int index = 0;
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    while (left < n && right < m)
    {

        if (arr1[left] < arr2[right])
        {
            arr3[index] = arr1[left];
            index++;
            left++;
        }
        else
        {
            arr3[index] = arr2[right];
            index++;
            right++;
        }
    }

    while (left < n)
    {
        arr3[index] = arr1[left];
        index++;
        left++;
    }
    while (right < m)
    {
        arr3[index] = arr2[right];
        index++;
        right++;
    }

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
        {
            arr1[i] = arr3[i];
        }
        else
        {
            arr2[i - n] = arr3[i];
        }
    }

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