vector<int> jimOrders(vector<vector<int>> o) {
    int i,j,n=o.size();
    vector<pair<int,int>>t;
    for(i=0;i<n;i++){
        t.push_back(make_pair((o[i][0]+o[i][1]),i+1));
    }
    vector<int>r;
    sort(t.begin(), t.end());
    for(i=0;i<n;i++){
        r.push_back(t[i].second);

    }
    return r;
}
