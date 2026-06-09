// Problem: Pascal Triangle - Print Complete Row
// Approach: Formula Based
// Time Complexity: O(C)
// Space Complexity: O(1)
#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r;
    cin >> c;
    int res = 1;
    cout << res << " " ;
    for (int i = 1; i < c; i++)
    {
        res = res * (r - i);
        res = res / i;
        cout << res << " ";
    }
}
