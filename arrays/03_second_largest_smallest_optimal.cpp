// Problem: Second Largest and Second Smallest Element
// Approach: Optimal (Single Pass)
// Time Complexity: O(N)
// Space Complexity: O(1)

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int largest = a[0];
    int secondLargest = INT_MIN;
    int smallest = a[0];
    int secondSmallest = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > secondLargest)
        {
            secondLargest = a[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < secondSmallest)
        {
            secondSmallest = a[i];
        }
    }
    cout << secondLargest << " " << secondSmallest << endl;
    return 0;
}
