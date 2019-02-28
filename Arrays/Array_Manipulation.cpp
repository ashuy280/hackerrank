#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,k,i,j,p,q,sum=0,max=0,temp=0;
    cin>>n>>k;
    vector<int>a(n+1);
    for(i=0;i<=n;i++)
        a[i]=0;
    for(i=0;i<k;i++){
        cin>>p>>q>>sum;
        a[p]+=sum;
        if((q+1)<=n){
            a[q+1]-=sum;
          //  cout<<"in if at "<<q<<" "<<a[q]<<endl;
        }
      //  cout<<"at "<<p-1<<" "<<a[p-1]<<endl;
    }
    for(i=1;i<=n;i++){
      //  cout<<"a["<<i<<"] is "<<a[i]<<endl;
        temp=temp+a[i];
       // cout<<"temp is "<<temp<<endl;
        if(temp>max)
            max=temp;
    }
    cout<<max;
}
