int mul(int a[],int m,int l){
    int c=0,i;
    for(i=0;i<l;i++){
        int j=a[i]*m+c;
        a[i]=j%10;
        c=j/10;
    }
    while(c){
        a[l]=c%10;
        c=c/10;
        l++;
    }
    return l;
}
// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
    int l=1,i,j;
    int a[500];
    a[0]=1;
    for(i=2;i<=n;i++){
        l=mul(a,i,l);
    }
    for(i=l-1;i>=0;i--){
        cout<<a[i];
    }

}
