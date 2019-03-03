
// Complete the chocolateFeast function below.
int chocolateFeast(int n, int c, int m) {
    if(n<c)
        return 0;
    int i,j,k=n/c,sum,r,l;
    sum=k;
    while(k>=m){
        l=k/m;
        sum+=l;
        k=l+k%m;
    }

return sum;
}
