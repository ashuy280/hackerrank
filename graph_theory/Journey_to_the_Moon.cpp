// test case 11 is not passing due to timeout


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the journeyToMoon function below.
int journeyToMoon(int n, vector<vector<int>> astronaut) {
    vector<int>a;
    queue<int>q;
    int l,i,j;
    long long total=1,buf=0;;
    long sum=0;
    int visited[n]={0};
    for(i=0;i<n;i++){
        if(visited[i]==0){
            q.push(i);
            visited[i]=1;
            while(!q.empty()){
                l=q.front();
                q.pop();
                sum++;
            //    cout<<"the value of l and sum is "<<l<<" and "<<sum<<endl;
                for(j=0;j<astronaut[l].size();j++){
                    if(visited[astronaut[l][j]]!=1){
                        visited[astronaut[l][j]]=1;
                        q.push(astronaut[l][j]);
                    }
                }
            }
            if(sum!=0)
            a.push_back(sum);
            sum=0;
        }
    }
  for(i=0;i<a.size()-1;i++){
      for(j=i+1;j<a.size();j++){
          buf+=a[i]*a[j];
      }
  }
  return buf;
}

int main()
{
    int n,p,i,s,d;
    cin>>n>>p;
    vector<vector<int>>a(n);
    for(i=0;i<p;i++){
        cin>>s>>d;
        a[s].push_back(d);
        a[d].push_back(s);
    }
    cout << journeyToMoon(n,a);
    return 0;
}
