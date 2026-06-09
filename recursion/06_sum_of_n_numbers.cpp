// Problem: Sum of N Natural Numbers
// Approach: Parameterized Recursion
// Time Complexity: O(N)
// Space Complexity: O(N)
#include <iostream>
using namespace std;

void printSum(int n, int sum)
{
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    printSum(n - 1, sum + n);
}

int main()
{
    int n;
    cin >> n;
    printSum(n, 0);
    return 0;
}
