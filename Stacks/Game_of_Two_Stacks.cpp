
int twoStacks(int x, vector<int> a, vector<int> b) {
  int sum = 0, count = 0, temp = 0, i = 0, j = 0,n=a.size(),m=b.size();

  while (i < n && sum + a[i] <= x) { 
    sum += a[i];
    i++;
  }
  count = i;
  while (j < m && i >= 0) { 
    sum += b[j];
    j++;
    while (sum > x && i > 0) {
      i--;
      sum -= a[i];
    }
    if (sum <= x && i + j > count)
      count = i + j;
  }
  return count;
}
