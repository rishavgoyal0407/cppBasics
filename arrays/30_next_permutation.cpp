/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Next Permutation                                           ║
 ║  Approach: Optimal                                          ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(3N)                                   ║
 ║  Space Complexity : O(1)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {2, 1, 5, 4, 3, 0, 0};
    int idx = -1;
    for (int i = 5; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
       reverse(a, a + 7);
    }
    for (int i = 6; i > idx; i--)
    {
        if (a[i] > a[idx])
        {
            swap(a[i], a[idx]);
            break;
        }
    }
    reverse(a + idx + 1, a + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
