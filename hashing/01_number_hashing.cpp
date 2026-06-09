// Problem: Number Hashing Using Array
// Approach: Frequency Array
// Time Complexity: O(N+Q)
// Space Complexity: O(max_element)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
   int a[n];
   int hash[1000]={0};
   for (int i = 0; i < n; i++)
   {
         cin >> a[i];
   }
   for (int i = 0; i < n; i++){
        hash[a[i]]++;
   }
   int q;
   cin >> q;
   while (q--){
        int x;
        cin >> x;
        cout << hash[x] << endl;
   }
    return 0;
}
