#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long s1 = (n * (n + 1)) / 2;
    long long s2 = (n * (n + 1) * (2 * n + 1)) / 6;
    int S1 = 0;
    int S2 = 0;

    for (int i = 0; i < n; i++)
    {
        S1 += arr[i];
        S2 = S2 + (arr[i] * arr[i]);
    }

    int val1 = s1 - S1;
    int val2 = s2 - S2;
    val2 = val2 / val1;

    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    cout << x << " ";
    cout << y << " ";

    return 0;
}