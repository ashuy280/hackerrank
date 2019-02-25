#include <bits/stdc++.h>

using namespace std;

// Complete the quickestWayUp function below.
int quickestWayUp(vector<vector<int>> ladders, vector<vector<int>> snakes) {
//cout<<" Hi function call "<<endl;
  queue<pair<int,int>> a;
  queue<pair<int,int>>temp;
  int visited[101],i, j, k, l,m, n,r=0,rr=0;
  for(i=1;i<=100;i++)
    visited[i]=0;
  pair<int,int>t;
  // int add[7];
  a.push(make_pair(1, 0));
  visited[1] = 1;
  //cout<<"before while loop"<<endl;
  while (!a.empty()) {
    t = a.front();
    a.pop();
    l = t.first;
    m = t.second;
    //a.pop();
    for (i = 1; i <= 6; i++) {
      k = l + i;
      if(k==100)
         return m+1;
      if (k <= 100 && visited[k]==0) {
      //  cout << "the value of k and m is " << k<<" "<<m+1 << endl;
        for (j = 0; j <snakes.size(); j++) {
          if (snakes[j][0] == k) {
            visited[k] = 1;
            a.push(make_pair(snakes[j][1],m+1));
            visited[snakes[j][1]]=1;
            rr=1;
          //  cout<<"snake meet at "<<k<<" and value of m is "<<m+1<<endl;
            break;
          }
        }
           if(rr==0){
            for (n = 0; n < ladders.size(); n++) {
              if (ladders[n][0] == k) {
                visited[k] = 1;
                //visited[ladders[n][1]] = 1;
                a.push(make_pair(ladders[n][1],m+1));
             /*   cout<<" he ladder meet at "<<k<<" and value of m is "<<m+1<<"cand desitnation is "<<ladders[n][1]<<endl;
                temp=a;
             /*   while(!temp.empty()){
                    cout<<"first and second element is "<<temp.front().first<<" and "<<temp.front().second<<endl;
                    temp.pop();
                }*/
                if(ladders[n][1]==100)
                    return m+1;
                r=1;
                break;
              }
            }
            if(r==0){
                if(k==100)
                    return m+1;
                a.push(make_pair(k,m+1));
                visited[k]=1;
            }
          }
          r = 0;
          rr = 0;
    }

    }

    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> ladders(n);
        for (int i = 0; i < n; i++) {
            ladders[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> ladders[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int m;
        cin >> m;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> snakes(m);
        for (int i = 0; i < m; i++) {
            snakes[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> snakes[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int result = quickestWayUp(ladders, snakes);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
