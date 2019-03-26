
long marcsCakewalk(vector<int> c) {
    sort(c.begin(),c.end(),greater<int>());
    long i,j=1,l=0;
    for(i=0;i<c.size();i++){
        l+=j*c[i];
        j=j*2;
    }
    return l;
}
