// Problem: Print N to 1 Using Backtracking
// Approach: Backtracking
// Time Complexity: O(N)
// Space Complexity: O(N)
#include <iostream>
using namespace std;

void revNum(int n,int i){
    if (n==0) return ;
    revNum(n-1,i+1);
    cout << i << " ";
}

int main(){
    int n,i=1;
    cin >> n;
    revNum(n,i);
    return 0;
}
