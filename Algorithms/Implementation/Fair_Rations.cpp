int fairRations(vector<int> a) {
    int i,count=0,n=a.size(),sum=0;
    for(i=0;i<n;i++){
        sum+=a[i];
        if(sum%2!=0)
            count+=2;
    }
    if(sum%2!=0)
        return -1;    
    return count;
}
