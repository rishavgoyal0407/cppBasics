#include <iostream>
using namespace std;

// // QUE-1 print name 5 times

// void printName(int n)
// {

//     if (n == 0)
//         return; // base case to stop recursion

//     cout << "my name is khan" << endl;

//     printName(n - 1); // recursive call with n-1 to eventually reach base case
// }

// int main()
// {
//     // TC-O(n) SC-O(n) due to recursive call stack
//     int n;

//     cin >> n;

//     printName(n);

//     return 0;
// }

// // QUE-2 PRINT 1 TO N

// void printNum(int n, int i)
// {

//     if (n == 0)
//         return;
//     cout << i << " ";
//     printNum(n - 1, i + 1);
// }

// int main()
// {

//     int n, i = 1;
//     cin >> n;
//     printNum(n, i);
//     return 0;
// }

// // QUE-3 PRINT N TO 1

// void revNum(int n)
// {

//     if (n == 0)
//         return;

//     cout << n << " ";
//     revNum(n - 1);
// }

// int main()
// {

//     int n;
//     cin >> n;
//     revNum(n);

//     return 0;
// }

//

// // QUE-4 print 1 to N using backtracking

// void printNum(int n)
// {

//     if (n==0)
//         return;
//     printNum(n - 1);
//     cout << n << " ";
// }
// int main()
// {

//     int n;
//     cin >> n;

//     printNum(n);

//     return 0;
// }

// // QUE -5 print N to 1 using backtracking

// void revNum(int n,int i){

//     if (n==0) return ;

//     revNum(n-1,i+1);
//     cout << i << " ";

// }

// int main(){

//     int n,i=1;
//     cin >> n;

//     revNum(n,i);

//     return 0;
// }

// // QUE-6 print sum of n natural numbers

// void printSum(int n, int sum)
// {
//     if (n == 0)
//     {
//         cout << sum << endl;
//         return;
//     }

//     printSum(n - 1, sum + n);
// }

// int main()
// {

//     int n;
//     cin >> n;
//     printSum(n, 0);

//     return 0;
// }

// QUE-7 reverse a array using recursion

// void reverse(int i, int a[], int n)
// {

//     if (i >= n / 2)
//         return;

//     swap(a[i], a[n - i - 1]);

//     reverse(i + 1, a, n);
// }

// int main()
// {

//     int n, i = 0;
//     cin >> n;

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     reverse(i, a, n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// QUE-8 check if string is palindrome using recursion


// void checkPalindrome(string s, int i, int n)
// {

//     if (i >= n / 2)
//     {
//         cout << "Palindrome" << endl;
//         return;
//     }

//     if (s[i] != s[n - i - 1])
//     {
//         cout << "Not Palindrome" << endl;
//         return;
//     }

//     checkPalindrome(s, i + 1, n);

// }

// int main(){

//     string s;
//     cin >> s;
//    int n = s.length();

//    checkPalindrome(s,0,n);


//     return 0;
// }