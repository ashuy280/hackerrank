int minimumAbsoluteDifference(vector<int> a) {
    sort(a.begin(),a.end());
    int min=INT_MAX,i,temp;
    for(i=1;i<a.size();i++){
        temp=abs(a[i]-a[i-1]);
        if(temp<min)
            min=temp;
    }
    return min;


}
