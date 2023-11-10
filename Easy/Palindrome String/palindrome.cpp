#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    int isPalindrome(string S)
    {
        string reversed = S;
        reverse(S.begin(), S.end());
        return (S == reversed) ? 1 : 0;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isPalindrome(s) << "\n";
    }
    return 0;
}