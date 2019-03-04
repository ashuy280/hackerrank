// Complete the flatlandSpaceStations function below.
int flatlandSpaceStations(int n, vector<int> c) {
    int i,j,temp,max=INT_MIN;
    sort(c.begin(),c.end());
    max=c[0]-0;
    for(i=0;i<c.size()-1;i++){
        temp=(c[i+1]-c[i])/2;
        //cout<<"the temp is "<<temp<<endl;
        if(temp>max)
            max=temp;
        //cout<<"max is "<<max<<endl;
    }
    temp=n-1-c[c.size()-1];
    if(temp>max)
        max=temp;
    return max;
}
