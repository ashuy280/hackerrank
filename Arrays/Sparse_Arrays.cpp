#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, q, i;
  string ss;
  unordered_multiset<string> s;
  cin >> n;
  for (i = 0; i < n; ++i) {
    cin >> ss;
    s.insert(ss);
  }
  cin >> q;
  for (i = 0; i < q; ++i) {
    cin >> ss;
    cout << s.count(ss) << '\n';
  }
}
