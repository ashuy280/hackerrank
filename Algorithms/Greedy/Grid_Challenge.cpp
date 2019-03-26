string gridChallenge(vector<string> g) {
    int i,j,n=g.size(),m=0,l=g[0].length();
    cout<<"hi h "<<endl;
    for(i=0;i<n;i++){
        sort(g[i].begin(),g[i].end());
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<l;j++){
            if(g[i][j]<=g[i+1][j])
                continue;
            else{
                return "NO";
            }
        }
    }
    
    return "YES";
}
