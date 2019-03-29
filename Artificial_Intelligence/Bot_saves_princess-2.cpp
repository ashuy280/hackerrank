#include <iostream>
#include <vector>
#include <string.h>
#include <string>

using namespace std;

void nextMove(int n, int r, int c, vector<string> grid){
    pair<int,int>a;
    int i,j;
    for (i = 0; i < n; i++) {
        for (j= 0; j < n; j++) {
            if (grid[i][j]=='p') {
                a.first = i; a.second = j;
                i = j = n; // end the loops
            }
        }
    }

/*
    Determine the first move to make:
*/
    // check the vertical first
    if (a.first<r) {
        cout << "UP" << endl;
    } else if (a.first >r) {
        cout << "DOWN" << endl;
    } else {
    /*
        Nesting the horizontal will give prefence to the vertical.
        This is desired. The `else` block shall only run if the locations
        of mario and the princess are vertically equivilent.     
    */
        if (a.second<c) {
            cout << "LEFT" << endl;
        } else if (a.second>c) {
            cout << "RIGHT" << endl;
        }
    }
}
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
