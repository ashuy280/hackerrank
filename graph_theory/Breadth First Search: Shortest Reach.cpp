#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the bfs function below.
vector<int> bfs(int n, int m, vector<vector<int>> e, int s) {
    queue<int>a;
    int l,i;
    int visited[n+1]={0};
    int distance[n+1];
    for(i=1;i<=n;i++)
        distance[i]=-1;
    distance[s]=0;
    a.push(s);
    visited[s]=1;
    while(!a.empty()){
        l=a.front();
        a.pop();
        for(i=0;i<m;i++){
            if(e[i][0]==l&&visited[e[i][1]]!=1){
                a.push(e[i][1]);
                visited[e[i][1]]=1;
                distance[e[i][1]]=distance[l]+6;
            }
            else if(e[i][1]==l&&visited[e[i][0]]!=1){
                a.push(e[i][0]);
                visited[e[i][0]]=1;
                distance[e[i][0]]=distance[l]+6;
            }
        }
        
    }
    vector<int>result;
    for(i=1;i<=n;i++){
        if(i==s)
            continue;
        else{
            result.push_back(distance[i]);
        }
    }
    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string nm_temp;
        getline(cin, nm_temp);

        vector<string> nm = split_string(nm_temp);

        int n = stoi(nm[0]);

        int m = stoi(nm[1]);

        vector<vector<int>> edges(m);
        for (int i = 0; i < m; i++) {
            edges[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> edges[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int s;
        cin >> s;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = bfs(n, m, edges, s);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
