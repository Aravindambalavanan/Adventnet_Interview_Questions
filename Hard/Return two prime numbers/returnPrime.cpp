#include <bits/stdc++.h>
using namespace std;
class Solution {
 private:
  bool isPrime(int k) {
    for (int i = 2; i <= sqrt(k); i++) {
      if (k % i == 0) {
        return false;
      }
    }
    return true;
  }

 public:
  vector<int> primeDivision(int N) {
    vector<int> v;
    for (int i = 2; i <= N; i++) {
      if (isPrime(i)) {
        if (isPrime(N - i)) {
          v.push_back(i);
          v.push_back(N - i);
          break;
        }
      }
    }
    return v;
  }
};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    Solution ob;
    vector<int> ans = ob.primeDivision(N);
    cout << ans[0] << " " << ans[1] << "\n";
  }
  return 0;
}