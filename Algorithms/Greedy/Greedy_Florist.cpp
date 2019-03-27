// Complete the getMinimumCost function below.
int getMinimumCost(int k, vector<int> v) {
    int n=v.size();
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    
    int tot = 0;
    for(int i = 0; i < n; ++i) {
        tot += ((i / k) + 1) * v[i];
    }
    return tot;


}
