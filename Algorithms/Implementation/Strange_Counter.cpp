
// Complete the strangeCounter function below.
long strangeCounter(long t) {
    long sum=3,r=t-3,s,e;
    if(t==1||t==2||t==3)
        return 4-t;
    while(r>0){
      sum = sum * 2;
      r = r - sum;
     // cout << "the value of r and sum is " << r << " and " << sum << endl;
    }
    s=sum-2;
    e=t-s;
   // cout<<"the value of s and e is "<<s<<" "<<e<<endl;
    sum=sum-e;
   // cout<<"the value of sum is "<<sum<<endl;
    return sum;
}
