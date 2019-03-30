void checkMagazine(vector<string> m, vector<string> n) {
    map<string,int>a;
    int i,j;
    for(i=0;i<m.size();i++){
        a[m[i]]+=1;
    }
    for(i=0;i<n.size();i++){
        if(a[n[i]]<=0){
            cout<<"No"<<endl;
            return;
        }
        else
            a[n[i]]--;
    }
    cout<<"Yes"<<endl;



}
