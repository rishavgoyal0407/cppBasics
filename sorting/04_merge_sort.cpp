// Problem: Merge Sort
// Approach: Divide and Conquer (Merge)
// Time Complexity: O(NlogN)
// Space Complexity: O(N)
#include <iostream>
#include <vector>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (a[right] < a[left])
        {
            temp.push_back(a[right]);
            right++;
        }
        else
        {
            temp.push_back(a[left]);
            left++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
}

void mergeSort(int a[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, high);
    merge(a, low, mid, high);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int low = 0;
    int high = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergeSort(a, low, high);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
