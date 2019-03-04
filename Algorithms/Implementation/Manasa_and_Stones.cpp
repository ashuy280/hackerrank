// Complete the stones function below.
vector<int> stones(int n, int a, int b) {
    vector<int>r;
    int first=0,sum=0;
  first=(n-1)*min(a,b);
    r.push_back(first);
        while(sum+first<(n-1)*max(a,b))
        {
            sum+=abs(b-a);
            r.push_back(sum+first);
        }

    return r;

}
