int maximumToys(vector<int> p, int k) {
    sort(p.begin(),p.end());
    int i=0,count=0,n=p.size();
    while(k>=0&&i<n){
        if(k-p[i]>=0){
            count++;
        }
        k=k-p[i];
        i++;
    }
    return count;
}
