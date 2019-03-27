bool valid(int a,int b,int c){
    if(a+b>c&&b+c>a&&c+a>b)
        return true;
    else 
        return false;
}
// Complete the maximumPerimeterTriangle function below.
vector<int> maximumPerimeterTriangle(vector<int> s) {
    int i,n=s.size();
    vector<int>a;
    sort(s.begin(),s.end());
    for(i=n-1;i>1;i--){
        bool j=valid(s[i],s[i-1],s[i-2]);
        if(j==true){
            a.push_back(s[i-2]);
            a.push_back(s[i-1]);
            a.push_back(s[i]);
            break;
        }
    }
    if(a.size()!=0)
        return a;
    a.push_back(-1);
    return a;


}
