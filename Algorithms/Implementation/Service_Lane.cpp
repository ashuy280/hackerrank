// Complete the serviceLane function below.
vector<int> serviceLane(int n, vector<vector<int>> c,vector<int>w) {
    int i,j,temp,min=INT_MAX;
    vector<int>r;
    for(i=0;i<c.size();i++){
        int l=c[i][0],m=c[i][1];
        for(j=l;j<=m;j++){
            temp=w[j];
            if(temp<min)
                min=temp;
        }
        r.push_back(min);
        min=INT_MAX;
    }
    return r;
}
