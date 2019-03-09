// Complete the countingSort function below.
vector<int> countingSort(vector<int> a) {
    int i,n=*max_element(a.begin(),a.end());
   // cout<<"max element is "<<n<<endl;
    vector<int>r(100,0);
    for(i=0;i<a.size();i++){
        r[a[i]]+=1;
    }
   // cout<<"size of r is "<<r.size()<<endl;
    return r;
}
