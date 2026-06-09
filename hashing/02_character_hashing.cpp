/*
 ╔══════════════════════════════════════════════════════════════╗
 ║  Character Hashing Using String                             ║
 ║  Approach: Frequency Array (26 chars)                       ║
 ╠══════════════════════════════════════════════════════════════╣
 ║  Time Complexity  : O(N+Q)                                  ║
 ║  Space Complexity : O(26)                                   ║
 ╚══════════════════════════════════════════════════════════════╝
*/

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char x;
        cin >> x;
        cout << hash[x - 'a'] << endl;
    }
    return 0;
}
