#include <bits/stdc++.h>
using namespace std;
// time -O(2n)
// space - O(n)
int main()
{

    int arr[] = {1, 4, 5, 6, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int hash[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int repeating = -1;
    int missing = -1;

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2)
        {
            repeating = i;
        }

        if (hash[i] == 0)
        {
            missing = i;
        }

        if (missing != -1 && repeating != -1)
        {
            break;
        }
    }

    cout << missing << " " << repeating;

    return 0;
}