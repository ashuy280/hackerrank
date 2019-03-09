#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
vector <int > v(n);
for(int i=0;i<n;i++)
    cin>>v[i];
sort(v.begin(),v.end());
int max=INT_MAX;
int id=0;
for(int i=1;i<n;i++)
    {
    if((v[i]-v[i-1])<max){max=(v[i]-v[i-1]); }
}
for(int i=0;i<n;i++)
    {
    if((v[i+1]-v[i])==max){ cout<<v[i]<<" "<<v[i+1]<<" ";}
}
return 0;
}
