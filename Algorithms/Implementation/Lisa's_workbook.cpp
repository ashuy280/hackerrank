int workbook(int n, int k, vector<int> ar) {
  int p = 1, c = 0, j = 0, m = 1,i;
  for (i = 0; i < n; i++) {
    m = 1;
    while (m <= ar[i]) {
      for (j = 1; j <= k && m <= ar[i]; j++) {
        if (m == p) {
          c += 1;
        }
        m += 1;
      }
      p += 1;
    }
  }
  //   cout<<"the final count is "<<count<<endl;
  return c;
}
