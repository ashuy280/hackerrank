// Complete the minimumDistances function below.
int minimumDistances(vector<int> a) {
    int i,j,temp=0,min=INT_MAX;
    for(i=0;i<a.size()-1;i++){
        for(j=i+1;j<a.size();j++){
            if(a[i]==a[j]){
                temp=j-i;
                if(temp<min)
                    min=temp;
            }
        }
    }
    if(min!=INT_MAX)
        return min;
    else 
        return -1;
}
