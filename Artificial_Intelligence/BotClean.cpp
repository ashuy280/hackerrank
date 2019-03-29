#include <iostream>
#include <vector>

using namespace std;

void next_move(int l,int m,vector<string>g){
    int i,j,k;
    pair<int,int>a;
    for(i=0;i<g.size();i++){
        for(j=0;j<g.size();j++){
            if(g[i][j]=='d'){
                a.first=i;
                a.second=j;
                i=g.size();
                j=g.size();
            }
        }
    }
    if(l==a.first&&m==a.second)
        cout<<"CLEAN"<<endl;
    else if(l>a.first)
            cout<<"UP"<<endl;
    else if(l<a.first)
            cout<<"DOWN"<<endl;
    else if(m>a.second)
            cout<<"LEFT"<<endl;
    else if(m<a.second)
            cout<<"RIGHT"<<endl;
}

int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
