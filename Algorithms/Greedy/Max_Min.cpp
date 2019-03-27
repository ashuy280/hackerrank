int maxMin(int k, vector<int> a) {
    sort(a.begin(),a.end());
    int i,j,n=a.size(),m=INT_MAX,temp;
    for(i=0;i<=n-k;i++){
        temp=a[i+k-1]-a[i];
        if(temp<m)
            m=temp;   
    }
    return m;

}
