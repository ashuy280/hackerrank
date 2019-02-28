#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,k;
    cin>>n;
    cin>>k;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int b[n];
    for(i=0;i<n;i++){
        j=i-k;
        if(j>=0)
            b[j]=a[i];
        else{
            j=j+n;
            b[j]=a[i];
        }


    }
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    return 0;
}

