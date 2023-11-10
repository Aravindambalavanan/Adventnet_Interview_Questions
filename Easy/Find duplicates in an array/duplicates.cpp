#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    vector<int> duplicates(long long arr[], int n)
    {
        unordered_map<long, long> mp;
        vector<int> result;

        for (int i = 0; i < n; i++)
            mp[arr[i]]++;

        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] > 1)
            {
                result.push_back(arr[i]);
                mp[arr[i]] = 0;
            }
        }

        if (result.empty())
            result.push_back(-1);

        sort(result.begin(), result.end());
        return result;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}