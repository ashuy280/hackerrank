// Complete the kaprekarNumbers function below.
int digit(long long n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
bool check(long long n){
    int i,j,d,l=0,r=0;
    long long s, rr = 1, ll = 1;
    d=digit(n);
    s=n*n;
    //cout<<"the value of d and  s is and n is "<<d<<" and "<<s<<" and "<<n<<endl;
    while(s!=0){
        int j=s%10;
        if(d>0){
            r+=j*rr;
            rr=rr*10;
            d--;
        }
        else{
            l+=j*ll;
            ll=ll*10;
        }
        s=s/10;
    }
   // cout<<"the value of l and r is "<<l<<" and "<<r<<endl;
    l=l+r;
   // cout<<"final value is "<<l;
    if(l==n)
        return true;
    return false;
}
void kaprekarNumbers(long long p, long long q) {
  long long i, k = 0;
  for (i = p; i <= q; i++) {
    bool j = check(i);
    if (j == true) {
      k = 1;
      cout << i << " ";
    }
  }
  if (k == 0)
    cout << "INVALID RANGE";
}
