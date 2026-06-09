// Problem: Quick Sort
// Approach: Divide and Conquer (Pivot Partition)
// Time Complexity: O(NlogN) avg, O(N^2) worst
// Space Complexity: O(1)
#include <iostream>
using namespace std;

int func(int a[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = a[low];
    while (i < j)
    {
        while (i < high && a[i] <= pivot)
        {
            i++;
        }
        while (j > low && a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[low], a[j]);
    return j;
}

void quick_Sort(int a[], int low, int high)
{
    if (low < high)
    {
        int partial = func(a, low, high);
        quick_Sort(a, low, partial - 1);
        quick_Sort(a, partial + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int low = 0;
    int high = n-1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quick_Sort(a, low, high);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
