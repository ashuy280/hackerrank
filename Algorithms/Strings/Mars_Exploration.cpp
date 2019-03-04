// Complete the marsExploration function below.
int marsExploration(string a) {
    int i=0,n=a.length(),count=0;
    while(i<=n-3){
        if(a[i]!='S')
             count++;
        if(a[i+1]!='O')
            count++;
        if(a[i+2]!='S')
            count++;
        i=i+3;
    }
    return count;
}
