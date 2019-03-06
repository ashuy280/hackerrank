// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    int len=1,max=0,i,j,k,l;
    vector<string>a;
for(int i=0;i<s.size()-1;i++){
    for(j=0;j<=s.size()-len;j++)
        a.push_back(s.substr(j,len));
    for(k=0;k<a.size();k++)
        sort(a[k].begin(),a[k].end());
    for(l=0;l<a.size()-1;l++){
        for(j=l+1;j<a.size();j++){
            if(a[l]==a[j])
                max++;
        }
    }
    len++;
    a.clear();
    }
    return max;
}
