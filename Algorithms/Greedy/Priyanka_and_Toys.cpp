int toys(vector<int> w) {
    int  n=w.size();
    if(n==0)
        return 0;
    sort(w.begin(),w.end());
    int i,j,count=1,min=w[0];
    for(i=1;i<n;i++){
        if(w[i]<=min+4)
            continue;
        else{
            count++;
            min=w[i];
        }
    }
    return count;

}
