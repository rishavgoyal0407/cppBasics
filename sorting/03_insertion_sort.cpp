/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Insertion Sort                                             ║
 ║  Approach: Place Element at Correct Position                ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N^2) worst/avg, O(N) best             ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            swap(a[j - 1], a[j]);
            j--;
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
    insertionSort(a, n);
    return 0;
}
