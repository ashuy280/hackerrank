char max(char a,char b){
    if(a>b)
        return a;
    else
        return b;

}
// Complete the highestValuePalindrome function below.
string highestValuePalindrome(string s, int n, int k) {
    int j=n/2-1,i,count=0;
    map<int,int>a;
    for(i=0;i<=j;i++){
        if(s[i]==s[n-1-i])
            continue;
        else{
            s[i]=max(s[i],s[n-1-i]);
            s[n-1-i]=s[i];
            count++;
            a[i]=1;
        }
    }
        for(i=0;i<=j&&count<k;i++){
            if(s[i]!='9'){
                if(a[i]==1)
                    count=count+1;
                else{
                    if(count+2>k)
                        continue;
                }
                if(a[i]!=1)
                    count=count+2;
                s[i]='9';
                s[n-1-i]='9';
            }
        }
    if(count+1<=k&&n%2!=0)
        s[n/2]='9';
    if(count>k)
        return "-1";
    else
        return s;
}
