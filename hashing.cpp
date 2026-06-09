#include <bits/stdc++.h>
using namespace std;

// // number hashing using array
// int main(){

//     int n;
//     cin >> n;
//    int a[n];
//    int hash[1000]={0};

//    for (int i = 0; i < n; i++)
//    {
//          cin >> a[i];
//    }

//    for (int i = 0; i < n; i++){

//         hash[a[i]]++;

//    }

//    int q;
//    cin >> q;

//    while (q--){

//         int x;
//         cin >> x;

//         cout << hash[x] << endl;
//    }

//     return 0;
// }

// character hashing using string

// int main()
// {

//     string s;
//     cin >> s;

//     int hash[26] = {0};  // could also be done using 256 for all ascii characters

//     for (int i = 0; i < s.size(); i++)
//     {

//         hash[s[i] - 'a']++;
//     }

//     int q;
//     cin >> q;

//     while (q--)
//     {

//         char x;
//         cin >> x;

//         cout << hash[x - 'a'] << endl;
//     }

//     return 0;
// }

// using unordered map

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {

//         cin >> a[i];
//     }

//     // time complexity of map and unordered map is O(log n) and O(1) respectively but in worst case it can be O(n) for both if there are many collisions
//     // map store keys in sorted order and unordered map store keys in random order but both have same time complexity for search, insert and delete operations which is O(1) on average and O(n) in worst case
//     map<int, int> mpp;  // key is the number and value is the frequency

//     for (int i = 0; i < n; i++)
//     {

//         mpp[a[i]]++;
//     }

//     // iterate in the map

//     for(auto it : mpp){

//         cout << it.first << " " << it.second << endl;
//     }

//     int q;

//     cin >> q;

//     while (q--)
//     {

//         int x;
//         cin >> x;

//         cout << mpp[x] << endl;
//     }

//     return 0;
// }

// find the element with max and min frequency in the array

// int main()
// {

//     int n;
//     cin >> n;
//     int maxFreq = 0;
//     int minFreq = n;  // initialize minFreq with n because the maximum frequency can be n if all elements are same
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     map<int, int> mpp;

//     for (int i = 0; i < n; i++)
//     {

//         mpp[a[i]]++;
//     }

//     int maxFreqElement = a[0];
//     int minFreqElement = a[0];
//     for (auto it : mpp)
//     {

//         if (it.second > maxFreq)
//         {
//             maxFreq = it.second;
//             maxFreqElement = it.first;
//         }

//         if (it.second < minFreq)
//         {
//             minFreq = it.second;
//             minFreqElement = it.first;
//         }
//     }



//     cout << "Element with max frequency: " << maxFreqElement << " and frequency is: " << maxFreq << endl;
//     cout << "Element with min frequency: " << minFreqElement << " and frequency is: " << minFreq << endl;

//     return 0;
// }


