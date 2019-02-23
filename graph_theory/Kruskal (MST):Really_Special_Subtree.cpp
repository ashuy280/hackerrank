#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'kruskals' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts WEIGHTED_INTEGER_GRAPH g as parameter.
 */

/*
 * For the weighted graph, <name>:
 *
 * 1. The number of nodes is <name>_nodes.
 * 2. The number of edges is <name>_edges.
 * 3. An edge exists between <name>_from[i] and <name>_to[i]. The weight of the edge is <name>_weight[i].
 *
 */
 int findparent(int a,int parent[]){
        if(parent[a]==a)
            return a;
        else
            return findparent(parent[a],parent);
 }


int kruskals(int g_nodes, vector<int> g_from, vector<int> g_to, vector<int> g_weight) {
    vector<pair<int,int>>a;
    vector<int>w;
    int sum=0;
    int i,j,temp=INT_MAX,index,n=g_weight.size(),x=0;
    for(i=0;i<n;i++){
        for(j=0;j<g_weight.size();j++){
            if(temp>g_weight[j]){
                temp=g_weight[j];
                index=j;
            }

        }
        w.push_back(g_weight[index]);
        g_weight.erase(g_weight.begin()+index);
        a.push_back(make_pair(g_from[index],g_to[index]));
        g_from.erase(g_from.begin()+index);
        g_to.erase(g_to.begin()+index);
        temp=INT_MAX;
        cout<<i<<endl;
      /*  for(int l=0;l<g_weight.size();l++){
            cout<<g_from[l]<<" "<<g_to[l]<<" "<<g_weight[l]<<endl;
        }*/
    }
    int parent[n+1];
    for(i=1;i<=n;i++){
        parent[i]=i;
    }
    int count=0,sp,dp;
    i=0;
    while(count!=g_nodes-1){
        sp=findparent(a[i].first,parent);
        dp=findparent(a[i].second,parent);
        if(sp!=dp){
            sum+=w[i];
            count++;
            parent[sp]=dp;
        }
        i++;
    }

    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_nodes_edges_temp;
    getline(cin, g_nodes_edges_temp);

    vector<string> g_nodes_edges = split(rtrim(g_nodes_edges_temp));

    int g_nodes = stoi(g_nodes_edges[0]);
    int g_edges = stoi(g_nodes_edges[1]);

    vector<int> g_from(g_edges);
    vector<int> g_to(g_edges);
    vector<int> g_weight(g_edges);

    for (int i = 0; i < g_edges; i++) {
        string g_from_to_weight_temp;
        getline(cin, g_from_to_weight_temp);

        vector<string> g_from_to_weight = split(rtrim(g_from_to_weight_temp));

        int g_from_temp = stoi(g_from_to_weight[0]);
        int g_to_temp = stoi(g_from_to_weight[1]);
        int g_weight_temp = stoi(g_from_to_weight[2]);

        g_from[i] = g_from_temp;
        g_to[i] = g_to_temp;
        g_weight[i] = g_weight_temp;
    }

    int res = kruskals(g_nodes, g_from, g_to, g_weight);
        fout << res;

    // Write your code here.

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
