#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[6][6];
    int i,j,k,max=INT_MIN,temp=0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            temp=a[i][j]+a[i-1][j]+a[i-1][j-1]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            if(temp>max)
                max=temp;
        }
    }
    cout<<max;
    return 0;
}
