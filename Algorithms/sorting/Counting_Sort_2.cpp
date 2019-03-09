
// Complete the countingSort function below.
vector<int> countingSort(vector<int> a) {
    vector<int>r(100,0);
    vector<int>rr;
    int i,j;
    for(i=0;i<a.size();i++)
        r[a[i]]+=1;
    for(i=0;i<100;i++){
        for(j=0;j<r[i];j++){
            rr.push_back(i);
        }
    }

    return rr;
}
