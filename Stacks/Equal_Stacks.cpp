
int findsum(vector<int>a,int l){
    int i=0,sum=0;
    for(i=l;i<a.size();i++)
        sum+=a[i];
    return sum;
}
int findmin(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}


int equalStacks(vector<int> a, vector<int> b, vector<int> c) {
    bool equalHeight = false;
    int h1,h2,h3,r1=0,r2=0,r3=0,min;
    h1=findsum(a,r1);
    h2=findsum(b,r2);
    h3=findsum(c,r3);
    if(h1==h2&&h2==h3)
        return h1;
    
    min=findmin(findmin(h1,h2),h3);
    while(true) {
        if(h1>min){
            h1-=a[r1];
            r1++;
        }
        if(h2>min){
            h2-=b[r2];
             r2++;
        }
        if(h3>min){
            h3-=c[r3];
            r3++;
        }
        if(h1==h2&&h2==h3)
            return h1;
        min=findmin(findmin(h1,h2),h3);
    }
//return h1;
}
