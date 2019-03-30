int minimumSwaps(vector<int> a) {
    vector<int>b(a.size());
    b=a;
    sort(b.begin(),b.end());
    int i,j,count=0,n=a.size();
    for(i = 0; i <n; i++) {
    if (a[i] != b[i]) {
        for (j = i+1; j <n; j++) {
            if(a[j] == b[i]) {
                swap(a[i],a[j]);
                count++;
                break;
            }
        }
    }

}
return count;
}
