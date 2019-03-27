int beautifulPairs(vector<int> a, vector<int> b) {
    int i,j=0,r=0,m=0,count=0,n=a.size();
    int v1[n]={0},v2[n]={0};
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){     
           if(a[i]==b[j]&&v1[i]==0&&v2[j]==0){
               count++;
               //v[j]=1;
               v1[i]=1;
               v2[j]=1;
               break;
           }
        }
     }
    /* cout<<"the value of count is "<<count<<endl;
     for(i=0;i<n;i++){
         cout<<"the v2 is "<<v2[i]<<end;
     }*/
     for(i=0;i<n;i++){
         if(v1[i]==0&&r==0)
             r=1;
         if(v2[i]==0&&m==0)
            m=1;
         if(r==1&&m==1)
            break;        
         
     }
     //cout<<"r and m is "<<r<<" "<<m<<endl;
     if(r==1&&m==1)
        count++;
     else
        count--;
     return count;
     }
