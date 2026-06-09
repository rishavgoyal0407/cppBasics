/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Check Palindrome String                                    ║
 ║  Approach: Two Pointer Recursion                            ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N)                                    ║
 ║  Space Complexity : O(N)                                    ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
using namespace std;

void checkPalindrome(string s, int i, int n)
{
    if (i >= n / 2)
    {
        cout << "Palindrome" << endl;
        return;
    }
    if (s[i] != s[n - i - 1])
    {
        cout << "Not Palindrome" << endl;
        return;
    }
    checkPalindrome(s, i + 1, n);
}

int main(){
    string s;
    cin >> s;
   int n = s.length();
   checkPalindrome(s,0,n);
    return 0;
}
