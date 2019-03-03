int sqire(int a){
    if(a==0||a==1)
        return a;
    int i,j,n=a/2;
    for(i=1;i<n;i++){
        if(i*i==a)
            return i;
        if(i*i>a)
            break;
    }
    return i;
}
int squares(int a, int b) {
    int s=sqire(a);
    int e=sqire(b);
    if(e*e>b)
        e=e-1;
    if(s==e)
        return 1;
    else if(e-s<0)
        return 0;
    else if(s*s>=a)
        return e-s+1;
    else{
        return e-s;
    }
}
