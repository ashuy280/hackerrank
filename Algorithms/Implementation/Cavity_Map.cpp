// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> arr) {
   // vector<int>r;
    if(arr.size()<2)
        return arr;
    vector<pair<int,int>>a;
    int i,j,n=arr.size(),m=arr[0].size(),l;
    for(i=1;i<n-1;i++){
        for(j=1;j<m-1;j++){
          if (arr[i][j] > arr[i - 1][j] &&
              arr[i][j] > arr[i + 1][j]&&
              arr[i][j]> arr[i][j - 1] &&
              arr[i][j]> arr[i][j + 1])
            arr[i][j] = 'X';
        }
    }
    return arr;
}
