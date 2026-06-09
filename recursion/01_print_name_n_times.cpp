// Problem: Print Name N Times
// Approach: Basic Recursion
// Time Complexity: O(N)
// Space Complexity: O(N)
#include <iostream>
using namespace std;

void printName(int n)
{
    if (n == 0)
        return;
    cout << "my name is khan" << endl;
    printName(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printName(n);
    return 0;
}
