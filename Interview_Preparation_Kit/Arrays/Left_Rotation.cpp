vector<int> rotLeft(vector<int> a, int d) {
    vector<int>r(a.size());
    int i,j,n=a.size();
    for(i=0;i<n;i++){
        j=i-d;
        while(j<0)
            j+=n;
        r[j]=a[i];
    }
    return r;
}
