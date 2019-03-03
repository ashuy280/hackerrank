
// Complete the beautifulTriplets function below.
int beautifulTriplets(int d, vector<int> a) {
    int i=0,j=1,k=2,count=0,n=a.size();
    while(i<n-2&&j<n-1&&k<n){
        if(a[j]-a[i]==d&&a[k]-a[j]==d){
            count++;
            i++;
        }
        if(a[j]-a[i]<d){
            j++;
        }
        else if(a[j]-a[i]>d){
            i++;
        }
        else if(a[k]-a[j]<d){
            k++;
        }
        else if(a[k]-a[j]>d){
            j++;
        }
    }
    return count;
}
