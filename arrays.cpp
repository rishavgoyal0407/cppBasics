#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// to find the largest element in an array
// time complexity O(N)
// int main(){

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int largest=a[0];

//     for (int i = 0; i < n; i++)
//     {
//        if (a[i]>largest)
//        {
//         largest = a[i];
//        }

//     }

//     cout << largest << endl ;

//     return 0;
// }

// second largest element in an array

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int largest = a[0];

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > largest)
//         {
//             largest = a[i];
//         }
//     }

//     int secondLargest=INT8_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > secondLargest && a[i] != largest)
//         {
//             secondLargest = a[i];
//         }
//     }

//     cout << secondLargest << endl ;

//     return 0;
// }

// optimal approach of second largest and second smallest number

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int largest = a[0];
//     int secondLargest = INT8_MIN;
//     int smallest = a[0];
//     int secondSmallest = INT16_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > largest)
//         {
//             secondLargest = largest;
//             largest = a[i];
//         }
//         else if (a[i] < largest && a[i] > secondLargest)
//         {
//             secondLargest = a[i];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < smallest)
//         {
//             secondSmallest = smallest;
//             smallest = a[i];
//         }
//         else if (a[i] < smallest && smallest != a[i])
//         {
//             smallest = a[i];
//         }
//     }

//     cout << secondLargest << " " << secondSmallest << endl;

//     return 0;
// }

//  Removing duplicates from a array using brute force
// time complexity O(nlogn)
// space complexity O(n)

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     set<int> s;

//     for (int i = 0; i < n; i++)
//     {

//         s.insert(a[i]);
//     }
//     int idx = 0;
//     for (auto it : s)
//     {

//         a[idx] = it;
//         idx++;
//     }

//     for (int i = 0; i < s.size(); i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// optimal approach of removing duplicates from an array
// time complexity O(n)
// space complexity O(1) because we are not using any extra space

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int i = 0;
//     for (int j = 0; j < n; j++)
//     {
//         if (a[j] != a[i])
//         {
//             a[i + 1] = a[j];
//             i++;
//         }
//     }

//     for (int k = 0; k < i + 1; k++)
//     {
//         cout << a[k] << " ";
//     }

//     return 0;
// }

// left rotate the array 1 place
// TC-O(n)
// extra sc-o(1)
// space complexity in algo is o(n)
// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int temp = a[0];

//     for (int i = 0; i < n; i++)
//     {
//         a[i - 1] = a[i];
//     }

//     a[n - 1] = temp;

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// rotate array by d places
// TC-O(n*d)
// extra sc-o(1)
// space complexity in algo is o(n)
// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int d;
//     cin >> d;
// d=d%n;
//     for (int k = 0; k < d; k++)
//     {
//         int temp = a[0];

//         for (int i = 0; i < n; i++)
//         {
//             a[i - 1] = a[i];
//         }

//         a[n - 1] = temp;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// better approach of rotate array by d places
// TC-O(n)
// extra sc-o(d)
// space complexity in algo is o(n)
// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int d;
//     cin >> d;
//      d=d%n;
//     int temp[d];

//     for (int i = 0; i < d; i++)
//     {
//         temp[i] = a[i];
//     }

//     for (int i = d; i < n; i++)
//     {
//         a[i - d] = a[i];
//     }

//     for (int i = 0; i < d; i++)
//     {
//         a[n - d + i] = temp[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// optimal approach of rotate array by d places
// TC-O(n)
// extra sc-o(1)
// space complexity in algo is o(n)

// void reverse(int a[], int low, int high)
// {

//     while (low <= high)
//     {

//         swap(a[low], a[high]);
//         low++;
//         high--;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int d;
//     cin >> d;
//     d = d % n;

//     reverse(a, 0, d - 1);
//     reverse(a, n - d - 1, n - 1);
//     reverse(a, 0, n - 1);

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// move all zeroes to the end of the array
// time complexity - o(n)
// space complexity - o(1)

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int idx = -1;

//     for (int j = 0; j < n; j++)
//     {
//         if (a[j] == 0)
//         {
//             idx = j;
//             break;
//         }
//     }

//     for (int i = idx + 1; i < n; i++)
//     {
//         if (a[i] != 0)
//         {
//             swap(a[idx], a[i]);
//             idx++;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// union of two sorted arrays (brute force)
// time  complexity - o(nlogn)
// space complexity - o(n)

// int main()
// {

//     int n;
//     cin >> n;
//     int a1[n], a2[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a1[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a2[i];
//     }

//     set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(a1[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         s.insert(a2[i]);
//     }

//     for (auto it : s)
//     {
//         cout << it << " ";
//     }

//     return 0;
// }

// optimal approach of union of two sorted arrays
// time complexity - o(n1+n2)
// space complexity - o(n1+n2)

// int main()
// {

//     int n1;
//     int n2;
//     cin >> n1;
//     cin >> n2;
//     int a[n1], b[n2];

//     for (int i = 0; i < n1; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n2; i++)
//     {
//         cin >> b[i];
//     }

//     vector<int> ans;
//     int i = 0, j = 0;

//     while (i < n1 && j < n2)
//     {

//         if (a[i] <= b[j])
//         {
//             if (ans.size() == 0 || ans.back() != a[i])
//             {
//                 ans.push_back(a[i]);
//             }

//             i++;
//         }
//         else
//         {

//             if (ans.size() == 0 || ans.back() != b[j])
//             {
//                 ans.push_back(b[j]);
//             }

//             j++;
//         }
//     }

//     while (i < n1)
//     {
//         if (ans.size() == 0 || ans.back() != a[i])
//         {
//             ans.push_back(a[i]);
//         }

//         i++;
//     }

//     while (j < n2)
//     {
//         if (ans.size() == 0 || ans.back() != b[j])
//         {
//             ans.push_back(b[j]);
//         }

//         j++;
//     }

//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }

// optimal approach for intersection of two sorted arrays
//  time complexity - o(n1+n2) because we are traversing both the arrays once
//  space complexity -o(1) because we are not using any extra space but we are using a vector to store the answer but that is not considered as extra space because we have to return the answer

// int main()
// {

//     int n1;
//     int n2;
//     cin >> n1;
//     cin >> n2;

//     int a[n1];
//     int b[n2];

//     for (int i = 0; i < n1; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n2; i++)
//     {
//         cin >> b[i];
//     }

//     int i = 0;
//     int j = 0;
//     vector<int> ans;
//     while (i < n1 && j < n2)
//     {

//         if (a[i] < b[j])
//         {
//             i++;
//         }
//         else if (b[j] < a[i])
//         {
//             j++;
//         }
//         else
//         {
//             ans.push_back(a[i]);
//             i++;
//             j++;
//         }
//     }

//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }

// brute force approach for intersection of two sorted arrays
// time complexity - o(n1*n2) because we are traversing both the arrays for each element of the first array
// space complexity - O(n2) because we are using a visited array to mark the elements of the second array which are already visited
// int main()
// {

//     int n1;
//     int n2;
//     cin >> n1;
//     cin >> n2;

//     int a[n1];
//     int b[n2];

//     for (int i = 0; i < n1; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n2; i++)
//     {
//         cin >> b[i];
//     }

//     vector<int> ans;
//     int vis[n2] = {0};

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             if (a[i] == b[j] && vis[j] == 0)
//             {
//                 ans.push_back(a[i]);
//                 vis[j] = 1;
//                 break;
//             }

//             if (b[j] > a[i])
//             {
//                 break;
//             }
//         }
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }

// missing number in an array of n-1 elements
// by linear search
// by hashing
// by sum of numbers
// by using XOR time complexity - o(n) because we are traversing the array once and space complexity - o(1) because we are not using any extra space

// int main()
// {

//     int n1;
//     cin >> n1;
//     int a[n1];
//     for (int i = 0; i < n1 - 1; i++)
//     {
//         cin >> a[i];
//     }

//     int xor1 = 0;
//     int xor2 = 0;

//     for (int i = 0; i < n1 - 1; i++)
//     {
//         xor1 = xor1 ^ (i + 1);
//         xor2 = xor2 ^ a[i];
//     }

//     xor1 = xor1 ^ n1;

//     int ans = xor1 ^ xor2;

//     cout << ans << endl ;

//         return 0;
// }

// maximum concecutive 1s
// time complexity - o(n) because we are traversing the array once
// space complexity - o(1) because we are not using any extra space
// int main()
// {

//     int n;
//     cin >> n;

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int maxfreq = 0;
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 1)
//         {
//             count++;
//         }
//         if (a[i] != 1)
//         {
//             if (count > maxfreq)
//             {
//                 maxfreq = count;
//                 count = 0;
//             }

//             count = 0;
//         }
//     }

//     cout << maxfreq << endl;

//     return 0;
// }

// find the number appears once in an array where every other element appears twice
// brute force (nested loop)
// by hashing
// using map
// using xor timep complexity - o(n) because we are traversing the array once and
// space complexity - o(1) because we are not using any extra space

// int main()
// {

//     int n;
//     cin >> n;

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int xor1 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         xor1 = xor1 ^ a[i];
//     }

//     cout << xor1 << endl;

//     return 0;
// }

// longest subarray with sum k ; considering no zeroes
// brute force
// time complexity - o(n^2) because we are traversing the array three times and space complexity - o(1) because we are not using any extra space
// space complexity is o(1) because we are not using any extra space but we are using a variable to store the sum but that is not considered as extra space because we have to store the sum
// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];
//     int num = 3;
//     int len = 0;
//     int sum;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         sum = 0;

//         for (int j = i; j < n; j++)
//         {

//             sum += a[j];
//             // for (int k = i; k <= j; k++)
//             // {
//             //     sum += a[k];

//             // }

//             if (sum == num)
//             {
//                 len = max(len, j - i + 1);
//             }
//         }
//     }

//     cout << len << endl;
//     return 0;
// }

// better approach of longest subarray with sum k
// using hashing

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n];
//     int num = 3;
//     int maxlen = 0;
//     int sum;
//     map<int, int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     return 0;
// }

//  optimal approach for longest subarray with sum k
// time complexity is o(2n) not o(n^2 ) because of two while loops but we are traversing the array at max two times and space complexity is o(1) because we are not using any extra space but we are using a variable to store the sum but that is not considered as extra space because we have to store the sum
// int main()
// {

//     int a[] = {1, 2, 3, 1, 1, 1, 1, 3, 3};
//     int i = 0;
//     int j = 0;
//     int len = 0;
//     int num = 6;
//     int sum = 0;

//     while (i < 9 && j < 9)
//     {

//         sum += a[j];

//         if (sum == num)
//         {
//             len = max(len, j - i + 1);
//         }

//         while (sum > num && i<=j)
//         {
//             sum -= a[i];
//             i++;
//         }

//         j++;
//     }

//     cout << len << endl;

//     return 0;
// }

// 2 sum in a sorted array
// time complexity -O(nlogn) in  best avg case for unordered map is O(n) and in worst case is O(n^2) because of collision and space complexity - O(n) because we are using a map to store the elements of the array

// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     int target;
//     cin >> target;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     map<int, int> mpp;

//     for (int i = 0; i < n; i++)
//     {
//         int a = arr[i];
//         int more = target - a;

//         if (mpp.find(more) != mpp.end())
//         {
//             cout << more + a << endl;
//         }

//         mpp[a]=i;
//     }

//     return 0;
// }

// optimal approach for variety 1
// this method is called greedy approach of using 2 pointers
// time complexity is O(n) +o(nlogn) (for sorting)
// space complexity is O(1) only in case of sorted array if we consider unsorted then to sort we would use space O(n)

// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     int target;
//     cin >> target;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int left = 0;
//     int right = n - 1;

//     while (left < right)
//     {

//         int a = arr[left];
//         int b = arr[right];
//         int sum = a + b;

//         if (sum == target)
//         {
//             cout << left << right << endl;
//         }
//         else if (sum < target)
//         {
//             left++;
//         }
//         else
//         {
//             right--;
//         }
//     }

//     return 0;
// }

// sort an array of 0s 1s and 2s
// time complexity is O(n)
// space complexity is O(1)
// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int low = 0;
//     int mid = 0;
//     int high = n - 1;

//     while (mid <= high)
//     {

//         if (arr[mid] == 0)
//         {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }

//         else if (arr[mid] == 1)
//         {

//             mid++;
//         }

//         else
//         {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// majority element occured more than N/2 times
// time complexity O(n) + O(nlogn)
// space complexity O(n)

// int main()
// {

//     int a[] = {2, 3, 3, 3, 1, 3, 2};

//     map<int, int> mpp;

//     for (int i = 0; i < 7; i++)
//     {
//         mpp[a[i]] += 1;
//     }

//     for (auto it : mpp)
//     {
//         if (it.second > 7 / 2)
//         {
//             cout << it.first << endl;
//         }
//     }

//     return 0;
// }

// optimal approach for majority element
// time complexity O(n)
// space complexity O(1)
// int main()
// {

//     int a[] = {2, 3, 3, 3, 1, 3, 2};
//     int el;
//     int count = 0;

//     for (int i = 0; i < 7; i++)
//     {
//         if (count == 0)
//         {
//             el = a[i];
//             count = 1;
//         }
//         else if (a[i] == el)
//         {

//             count++;
//         }
//         else
//         {
//             count--;
//         }
//     }

//     cout << el;

//     return 0;
// }

// maximum subarray sum
// kadane s algorithm
// time complexity - O(n)
// space complexity-O(1)
// int main()
// {

//     int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
//     int maxi = INT16_MIN;
//     int sum = 0;
//     int start = -1;
//     int end = -1;
//     int ansStart = -1;

//     for (int i = 0; i < 8; i++)
//     {

//         if (sum == 0)
//         {
//             start = i;
//         }

//         sum += a[i];

//         if (sum > maxi)
//         {
//             maxi=sum;
//             ansStart = start;
//             end = i;
//         }

//         if (sum < 0)
//         {
//             sum = 0;
//         }
//     }

//     cout << maxi << " " << ansStart << " " << end ;
// }

// best time to sell or buy stocks (dynamic programming)
// time complexity -O(n)
// space complexity-O(1)

// int main()
// {

//     int a[] = {7, 1, 5, 3, 6, 4};
//     int mini = a[0];
//     int maxi = INT_MIN;
//     int cost;
//     int profit = 0;

//     for (int i = 1; i < 6; i++)
//     {
//         cost = a[i] - mini;
//         profit = max(profit, cost);

//         mini = min(mini, a[i]);
//     }

//     cout << profit;
//     return 0;
// }

// rearrange arry by sign
// when have equal numbers of negative and positive
// time complexity O(2n)
// space complexity O(n)

// int main(){

//     int a[] = {3, 1, -2, -5, 2,-4};
//     vector <int > vec(6);
//     int pos=0;
//     int neg=1;

//     for (int i = 0; i < 6; i++)
//     {
//         if (a[i]>0)
//         {
//             vec[pos]=a[i];
//             pos+=2;

//         }
//         else {
//             vec[neg]=a[i];
//             neg+=2;
//         }

//     }

//     for (int i = 0; i < 6; i++)
//     {
//         cout << vec[i] << " ";
//     }

//     return 0;
// }

// rearrange the array when number of pos and neg are not equal
// time complexity is-: O(2n)
// space complexity is -: O(n)

// int main()
// {

//     int a[] = {3, 1, -2, -5, 2, -4,3,24};
//     vector<int> pos, neg;

//     for (int i = 0; i < 8; i++)
//     {
//         if (a[i] > 0)
//         {
//             pos.push_back(a[i]);
//         }

//         else
//         {
//             neg.push_back(a[i]);
//         }
//     }
//     if (pos.size() > neg.size())
//     {
//         for (int i = 0; i < neg.size(); i++)
//         {
//             a[2 * i] = pos[i];
//             a[2 * i + 1] = neg[i];
//         }

//         int index = neg.size() * 2;
//         for (int i = neg.size(); i < pos.size(); i++)
//         {
//             a[index] = pos[i];
//             index++;
//         }
//     }

//     else
//     {

//         for (int i = 0; i < pos.size(); i++)
//         {
//             a[2 * i] = pos[i];
//             a[2 * i + 1] = neg[i];
//         }

//         int index = pos.size() * 2;
//         for (int i = pos.size(); i < neg.size(); i++)
//         {
//             a[index] = neg[i];
//             index++;
//         }
//     }

//     for (int i = 0; i < 8; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// next permutation
// time complexity - O(3n)
// space complexity - O(n) if modifying array consider in time complexity otherwise it s O(1) as we dont use extra space
// int main()
// {

//     int a[] = {2, 1, 5, 4, 3, 0, 0};
//     int idx = -1;

//     for (int i = 5; i >= 0; i--)
//     {
//         if (a[i] < a[i + 1])
//         {
//             idx = i;
//             break;
//         }
//     }

//     if (idx == -1)
//     {
//        reverse(a, a + 7);
//     }

//     for (int i = 6; i > idx; i--)
//     {
//         if (a[i] > a[idx])
//         {
//             swap(a[i], a[idx]);
//             break;
//         }
//     }

//     reverse(a + idx + 1, a + 7);

//     for (int i = 0; i < 7; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// leader in an array (right most are smaller)
// time complexity -O(n)
// space complexity - O(n) to return the value

// int main()
// {

//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int maxi = INT_MIN;
//     vector<int> vec;

//     for (int i = n - 1; i >= 0; i--)
//     {

//         if (a[i] > maxi)
//         {

//             vec.push_back(a[i]);
//         }

//         maxi = max(maxi, a[i]);
//     }

//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << " ";
//     }

//     return 0;a
// }

// longest consecutive sequence in an array

// int main()
// {

//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     sort(a, a + n);
//     int longest = 1;
//     int countArr = 0;
//     int lastSmaller = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {

//         if (a[i] - 1 == lastSmaller)
//         {
//             countArr++;
//             lastSmaller = a[i];
//         }
//         else if (a[i] != lastSmaller)
//         {
//             countArr = 1;
//             lastSmaller = a[i];
//         }
//         longest = max(longest, countArr);
//     }

//     cout << longest << endl ;

//     return 0;
// }

// optimal approach of longest concecutive sequence
// unsorted set
// time complexity in average and best is O(1) but in worst case O(n)
// actual time complexity is O(n) +O(2n) =O(3n);
//  space complexity is O(n)

// int main()
// {

//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     unordered_set<int> st;

//     for (int i = 0; i < n; i++)
//     {
//         st.insert(a[i]);
//     }

//     int x;
//     int cnt = 0;
//     int longest = INT_MIN;

//     for (auto it : st)
//     {

//         if (st.find(it - 1) == st.end())
//         {
//             int cnt = 1;
//             int x = it;
//             while (st.find(x + 1) != st.end())
//             {
//                 x = x + 1;
//                 cnt = cnt + 1;
//             }

//             longest = max(longest, cnt);
//         }
//     }

//     return 0;
// }

// set matrix zeroes
// time complexity is O(n^2)
// space complexity is O(1)
// int main()
// {

//     int row;
//     int column;
//     cin >> row;
//     cin >> column;
//     int a[row][column];
//     int col0 = 1;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cout << a[i][j] << " ";
//         }

//         cout << "\n"
//              << endl;
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if (a[i][j] == 0)
//             {
//                 a[i][0] = 0;

//                 if (j != 0)
//                 {
//                     a[0][j] = 0;
//                 }
//                 else
//                 {
//                     col0 = 0;
//                 }
//             }
//         }
//     }

//     for (int i = 1; i < row; i++)
//     {
//         for (int j = 1; j < column; j++)
//         {
//             if (a[i][j] != 0)
//             {
//                 if (a[0][j] == 0 || a[i][0] == 0)
//                 {

//                     a[i][j] = 0;
//                 }
//             }
//         }
//     }

//     if (a[0][0] == 0)
//     {
//         for (int i = 0; i < row; i++)
//         {
//             a[0][i] = 0;
//         }
//     }

//     if (col0 == 0)
//     {
//         for (int i = 0; i < column; i++)
//         {
//             a[i][0] = 0;
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cout << a[i][j] << " ";
//         }

//         cout << "\n"<< endl;
//     }

//     return 0;
// }

// rotate matrix image by 90 degree (do transpose by swapping along diagonal and reverse of each row )
// time complexity -O(N/2 *N/2) + O(N/2) (reverse two pointer)
// space complexity- O(1)

// int main()
// {
//     int row;
//     int column;
//     cin >> row;
//     cin >> column;
//     int a[row][column];

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 0; i < row - 1; i++)
//     {
//         for (int j = i+1; j < column; j++)
//         {
//             swap(a[i][j], a[j][i]);
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         int left = 0;
//         int right = column - 1;
//         while (left < right)
//         {
//             swap(a[i][left], a[i][right]);
//             left++;
//             right--;
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cout << a[i][j] << " ";
//         }

//         cout << "\n"
//              << endl;
//     }

//     return 0;
// }

// spiral traversal of a matrix
// time complexity is O(row*colummn)
// space complexity is O(row*column)

// int main()
// {

//     int row;
//     int column;
//     cin >> row;
//     cin >> column;
//     int a[row][column];

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     int top = 0;
//     int left = 0;
//     int right = column - 1;
//     int bottom = row - 1;
//     vector<int> vec;

//     while (left <= right && top <= bottom)
//     {

//         for (int i = left; i <= right; i++)
//         {
//             vec.push_back(a[top][i]);
//         }
//         top++;

//         for (int i = top; i <= bottom; i++)
//         {
//             vec.push_back(a[i][right]);
//         }

//         right--;

//         if (top <= bottom)
//         {
//             for (int i = right; i >= left; i--)
//             {
//                 vec.push_back(a[bottom][i]);
//             }
//             bottom--;
//         }

//         if (left <= right)
//         {
//             for (int i = bottom; i >= top; i--)
//             {
//                 vec.push_back(a[i][left]);
//             }

//             left++;
//         }
//     }

//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << " ";
//     }

//     return 0;
// }

// count all subarrays with given sum equals k;
// time complexity - O(n)
// space complexity - O(n) in worst case of unordered map

// int main()
// {

//     int a[] = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};

//     unordered_map<int, int> mpp;

//     mpp[0] = 1;

//     int prefixSum = 0;
//     int cnt = 0;
//     int k = 3;
//     for (int i = 0; i < 10; i++)
//     {
//         prefixSum += a[i];
//         int remove = prefixSum - k;
//         cnt += mpp[remove];
//         mpp[prefixSum]++;
//     }

//     cout << cnt << endl ;
// }

// pascal triangle
// there are 3 types of questions to be asked
// Que-1
// asked the value of element at rth row and cth column
// R-1^C c-1 formula

// example row 5 and column 3 ;
// time complexity -O(c)
// space complexity -O(1)
// int main()
// {
//     int r, c;
//     cin >> r;
//     cin >> c;
//     int res = 1;

//     for (int i = 0; i < c - 1; i++)
//     {
//         res = res * (r - 1 - i);
//         res = res / (i + 1);
//     }

//     cout << res << endl;
// }

// Que -2 print complete row with given row number

// int main()
// {

//     int r, c;
//     cin >> r;
//     cin >> c;
//     int res = 1;
//     cout << res << " " ;

//     for (int i = 1; i < c; i++)
//     {
//         res = res * (r - i);
//         res = res / i;

//         cout << res << " ";
//     }
// }

// Que -3
// generate pascal triangle
// time complexity -O(row^2) because we are generating row number of rows and each row has row number of elements
// space complexity - O(row^2) because we are storing row number of rows and each

// vector<int> generateRow(int row)
// {

//     long long ans = 1;
//     vector<int> ansRow;
//     ansRow.push_back(1);
//     for (int i = 1; i < row; i++)
//     {
//         ans = ans * (row - i);
//         ans = ans / i;
//         ansRow.push_back(ans);
//     }

//     return ansRow;
// }

// int main()
// {

//     int row;
//     cin >> row;

//     vector<vector<int>> ans; // vector of vectors

//     for (int i = 1; i <= row; i++)
//     {
//         ans.push_back(generateRow(i));
//     }

//     for (auto row : ans)
//     {
//         for (auto val : row)
//         {
//             cout << val << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// majority element part-2
// elements > n/3
// time complexity - O(2n)
// space complexity - O(1) as only 2 elements can be the answer because if we have 3 elements then they will be less than n/3 times so we can only have 2 elements as answer

// int main()
// {

//     int a[] = {2, 1, 1, 3, 1, 3, 5, 3};
//     int mini = 3; // 8/3 +1
//     int el1, el2;
//     int cnt1 = 0;
//     int cnt2 = 0;

//     for (int i = 0; i < 8; i++)
//     {
//         if (cnt1 == 0 && el2 != a[i])
//         {
//             cnt1 = 1;
//             el1 = a[i];
//         }
//         else if (cnt2 == 0 && el1 != a[i])
//         {
//             cnt2 = 1;
//             el2 = a[i];
//         }
//         else if (el1 == a[i])
//             cnt1++;
//         else if (el2 == a[i])
//             cnt2++;
//         else
//         {
//             cnt1--;
//             cnt2--;
//         }
//     }

//     int cnt3 = 0;
//     int cnt4 = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         if (el1 == a[i])
//         {
//             cnt3++;
//         }
//         if (el2 == a[i])
//             cnt4++;
//     }

//     if (cnt3 >= mini)
//     {
//         cout << el1 << " ";
//     }

//     if (cnt4 >= mini)
//         cout << el2 << " ";

//     return 0;
// }

// ### 3sum

// brute force approach of 3sum problem
// int main()
// {

//     int a[] = {-1, 0, 1, 2, -1, -4};
//     int n = sizeof(a) / sizeof(a[0]);
//     set<vector<int>> set;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (a[i] + a[j] + a[k] == 0)
//                 {
//                     vector<int> temp = {a[i], a[j], a[k]};
//                     sort(temp.begin(), temp.end());
//                     set.insert(temp);
//                 }
//             }
//         }
//     }

//     vector<vector<int>> ans(set.begin(), set.end());

//     for (auto row : ans)
//     {
//         for (auto el : row)
//         {
//             cout << el << " ";
//         }

//         cout << "\n" ;
//     }

//     return 0;
// }

// better approach of 3 Sum problem

// int main()
// {

//     int a[] = {-1, 0, 1, 2, -1, -4};
//     int n = sizeof(a) / sizeof(a[0]);

//     set<vector<int>> st;

//     for (int i = 0; i < n; i++)
//     {
//         set<int> set;

//         for (int j = i + 1; j < n; j++)
//         {
//             int third = -(a[i] + a[j]);
//             if (set.find(third) != set.end())
//             {
//                 vector<int> temp = {a[i], a[j], third};
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }
//             set.insert(a[j]);
//         }
//     }

//     vector<vector<int>> ans(st.begin(), st.end());

//     for (auto row : ans)
//     {
//         for (auto el : row)
//         {
//             cout << el << " ";
//         }

//         cout << "\n";
//     }

//     return 0;
// }

// optimal approach of 3sum problem

// int main()
// {

//     int a[] = {-2, -2, -2, -1, -1, -1, 0, 0, 0, 2, 2, 2};
//     int n = sizeof(a) / sizeof(a[0]);
//     vector<vector<int>> ans;

//     for (int i = 0; i < n; i++)
//     {
//         if (i > 0 && a[i] == a[i - 1])
//             continue;
//         int j = i + 1;
//         int k = n - 1;
//         while (j < k)
//         {
//             int sum = a[i] + a[k] + a[j];

//             if (sum == 0)
//             {
//                 vector<int> temp = {a[i], a[j], a[k]};
//                 ans.push_back(temp);
//                 j++;
//                 k--;
//                 while (j < k && a[j] == a[j - 1])
//                 {
//                     j++;
//                 }
//                 while (j < k && a[k] == a[k + 1])
//                 {
//                     k--;
//                 }
//             }

//             else if (sum > 0)
//             {
//                 k--;
//             }
//             else
//             {
//                 j++;
//             }
//         }
//         }

//     for (auto row : ans)
//     {
//         for (auto el : row)
//         {
//             cout << el << " ";
//         }

//         cout << "\n";
//     }

//     return 0;
// }

// ## 4sum
// time complexity -O(N^2logN) - O(N^3)
// space complexity- O(number  of quartz)

// int main()
// {

//     int a[] = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5};
//     int n = sizeof(a) / sizeof(a[0]);
//     int target = 8;
//     vector<vector<int>> ans;

//     for (int i = 0; i < n; i++)
//     {
//         if (i > 0 && a[i] == a[i - 1])
//         {
//             continue;
//         }
//         for (int j = i + 1; j < n; j++)
//         {

//             if (j != i + 1 && a[j] == a[j - 1])
//             {
//                 continue;
//             }
//             int k = j + 1;
//             int l = n - 1;

//             while (k < l)
//             {
//                 int sum = a[i] + a[j] + a[k] + a[l];
//                 if (sum > target)
//                 {
//                     l--;
//                 }
//                 else if (sum < target)
//                 {
//                     k++;
//                 }
//                 else
//                 {
//                     vector<int> temp = {a[i] ,a[j] , a[k] ,a[l]};
//                     ans.push_back(temp);
//                     k++;
//                     l--;

//                     while (k < l && a[k] == a[k - 1])
//                     {
//                         k++;
//                     }
//                     while (k < l && a[l] == a[l + 1])
//                     {
//                         l--;
//                     }
//                 }
//             }
//         }
//     }

//     for (auto row : ans)
//     {
//         for (auto el : row)
//         {
//             cout << el << " ";
//         }

//         cout << "\n";
//     }

//     return 0;
// }

// number of subarrays withsum k #####3
// Time: O(n)
// Space: O(n)

// int main()
// {

//     int arr[] = {1, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     unordered_map<int, int> mpp;
//     int prefixXor = 0;
//     mpp[prefixXor] = 1;
//     int k = 3;
//     int cnt = 0;

//     for (int i = 0; i < n; i++)
//     {
//         prefixXor = prefixXor ^ arr[i];
//         int x = prefixXor ^ k;
//         cnt += mpp[x];

//         mpp[prefixXor]++;
//     }

//     return 0;
// }