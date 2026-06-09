// Problem: Print 1 to N
// Approach: Basic Recursion
// Time Complexity: O(N)
// Space Complexity: O(N)
#include <iostream>
using namespace std;

void printNum(int n, int i)
{
    if (n == 0)
        return;
    cout << i << " ";
    printNum(n - 1, i + 1);
}

int main()
{
    int n, i = 1;
    cin >> n;
    printNum(n, i);
    return 0;
}
