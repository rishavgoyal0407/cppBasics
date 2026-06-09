// Problem: Print 1 to N Using Backtracking
// Approach: Backtracking
// Time Complexity: O(N)
// Space Complexity: O(N)
#include <iostream>
using namespace std;

void printNum(int n)
{
    if (n==0)
        return;
    printNum(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    printNum(n);
    return 0;
}
