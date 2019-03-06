// Complete the quickSort function below.
vector<int> quickSort(vector<int> arr) {

int pivot=arr[0];
for(int i=1;i<arr.size();i++){
    if(pivot>arr[i]){
        for(int j=i;j>0;j--){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
    }
}
return arr;


}
