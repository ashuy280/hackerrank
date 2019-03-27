long candies(int n, vector<int> a) {
    vector<int>b(n,1);
    int i,j,k;
    for(i=1;i<n;i++){
        if(a[i]>a[i-1])
            b[i]=b[i-1]+1;
    }
    for(i=n-2;i>=0;i--){
        if(a[i]>a[i+1]&&b[i]<b[i+1]+1)
            b[i]=b[i+1]+1;
    }
    long c=0;
    for(i=0;i<n;i++)
        c+=b[i];
    return c;

}
