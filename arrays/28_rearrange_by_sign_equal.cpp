// Problem: Rearrange Array by Sign (Equal Pos & Neg)
// Approach: Optimal
// Time Complexity: O(2N)
// Space Complexity: O(N)
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a[] = {3, 1, -2, -5, 2,-4};
    vector <int > vec(6);
    int pos=0;
    int neg=1;
    for (int i = 0; i < 6; i++)
    {
        if (a[i]>0)
        {
            vec[pos]=a[i];
            pos+=2;
        }
        else {
            vec[neg]=a[i];
            neg+=2;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
