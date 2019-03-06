#include <bits/stdc++.h>

using namespace std;

// Complete the roadsAndLibraries function below.
long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> a) {
  long i, j, k, l, road = 0, lib = 0;
  int v[n + 1] = {0};
  queue<int> c;
  for (i = 1; i <= n; i++) {
    if (v[i] == 0) {
      c.push(i);
      while (!c.empty()) {
        l = c.front();
        c.pop();
        v[l] = 1;
        for (j = 0; j < a[l].size(); j++) {
          if (v[a[l][j]] == 0) {
            c.push(a[l][j]);
            v[a[l][j]] = 1;
            road++;
          }
        }
      }
      lib++;
    }
    // cout<<" the value of i and lib is "<<i<<" and "<<lib<<endl;
  }
  if (c_lib < c_road) {
    lib = (lib + road) * c_lib;
    return lib;
  }
  lib = lib * c_lib + road * c_road;
  return lib;
}
int main() {
  int t, n, s, d, m, cl, cr, i;
  cin >> t;
  long result;
  while (t--) {
    cin >> n >> m >> cl >> cr;
    vector<vector<int>> a(n + 1);
    for (i = 0; i < m; i++) {
      cin >> s >> d;
      a[s].push_back(d);
      a[d].push_back(s);
    }
    result = roadsAndLibraries(n, cl, cr, a);
    cout << result << endl;
    a.clear();
  }
  return 0;
}
