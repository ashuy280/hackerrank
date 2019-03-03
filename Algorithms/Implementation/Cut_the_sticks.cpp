vector<int> cutTheSticks(vector<int> a) {
    int i,j,n=a.size();
    int l=n;
    vector<int>r;
    r.push_back(n);
    sort(a.begin(),a.end());
    map<int,int>m;
    for(i=0;i<n;i++){
        m[a[i]]=1;
    }
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]&&a[i]!=0){
            m[a[i]]+=1;
        }  
    }
    if(a[n-2]==a[n-1])
        m[a[n-1]]+=1;
    i=0;
    while(i<l){
        j=m[a[i]];
        n-=j;
        i=i+j;
        if(n>0)
          r.push_back(n);
    }
    return r;
    

}
