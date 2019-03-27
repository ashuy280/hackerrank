
int luckBalance(int k, vector<vector<int>> c) {
    int i,j,n=c.size(),sum=0;
    vector<int>a;
    for(i=0;i<n;i++){
        sum+=c[i][0];
        if(c[i][1]==1)
            a.push_back(c[i][0]);
    }
    sort(a.begin(),a.end());
    k=a.size()-k;
    if(k<=0)
        return sum;
        i=0;
    while(k--){
        sum-=2*a[i];
        i++;
        
    }
    return sum;

}
