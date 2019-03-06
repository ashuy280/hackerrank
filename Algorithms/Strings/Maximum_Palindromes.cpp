// it only passes 14 test cases









// Return the answer for this query modulo 1000000007
int fact(int n){
  int a[n + 1],i, k = 1000000007;
  a[0] = 1;
  a[1] = 1;
  for (i = 1; i <= n; i++) {    
      a[i]=(a[i-1]*i)%k;

    }
    return a[n];
}
int answerQuery(int l, int r,string s) {
   // cout<<"function called "<<endl;
    int count=0,i,j,t=0,d=1000000007,mm=1;
    map<char,int>a;
    vector<int>visited(26);
    vector<int>aa;
   // cout<<"before initialize visited array "<<endl;
    for(i=0;i<26;i++){
        visited[i]=0;
       // cout<<"initializing visited array "<<endl;
    }
    for(i=l-1;i<r;i++){
        a[s[i]]+=1;
   // cout<<"the s[i] and a[s[i]] is "<<s[i]<<" and "<<a[s[i]]<<endl;
    }
    for(i=l-1;i<r;i++){
        if(visited[s[i]-'a']==0){
            visited[s[i]-'a']=true;
            if(a[s[i]]%2==0){
                t+=a[s[i]];
       // cout<<"this is not seen it is even and the value of t is "<<s[i]<<" and   "<<t<<endl;
                if(a[s[i]]/2>1)
                    aa.push_back(a[s[i]]/2);
                 a[s[i]]=0;
            }
            else if(a[s[i]]%2!=0){
                int ii=a[s[i]]/2;
                if(ii>1)
                    aa.push_back(ii);
                t+=ii*2;
       // cout<<"this is not seen yet and the value is "<<s[i]<<" and "<<t<<endl;
                a[s[i]]=1;
            }
        }
    }
    for(i=0;i<26;i++)
        visited[i]=0;
    for(i=l-1;i<r;i++){
        if(visited[s[i]-'a']==0&&a[s[i]]==1){
            visited[s[i]-'a']=1;
            count++;
       //     cout<<"in odd occur the value of count is "<<s[i]<<" and "<<count<<endl;
        }
    } 
 //   cout<<"the factorial of "<<t/2<<" ";
    t=fact(t/2);
   // cout<<"is "<<t<<endl;
    for(i=0;i<aa.size();i++){
  //  cout<<"this occur mroe than one time and fact is  ";
        mm=(mm*fact(aa[i]))%d;
   // cout<<aa[i]<<" and "<<mm<<endl;
    }
    int result=t/mm;
 //   cout<<"result is after divide mm "<<result<<endl;
    if(count!=0)
    result=(result*count)%d;
   // cout<<result;
    return result;
}
