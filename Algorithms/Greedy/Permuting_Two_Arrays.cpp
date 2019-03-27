string twoArrays(int k, vector<int> a, vector<int> b) {
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a[0]+b[0]>=k){
        return "YES";
    }
    reverse(a.begin(),a.end());
    int i;
    for(i=0;i<a.size();i++){
        if(a[i]+b[i]<k)
            return "NO";
    }
    return "YES";

}
