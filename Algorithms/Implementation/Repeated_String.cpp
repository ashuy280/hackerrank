long repeatedString(string s, long n) {
    long i,d,t=0,r,l=s.length(),sum=0;
    d=n/l;
    r=n%l;
    for(i=0;i<l;i++)
        if(s[i]=='a')
            t++;
    if(t==0)
        return 0;
    sum+=t*d;
    for(i=0;i<r;i++){
        if(s[i]=='a')
            sum++;
    }
    return sum;
}
