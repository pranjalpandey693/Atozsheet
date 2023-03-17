
long long int no_of_subarrays(int n, vector<int> &arr) {
    // Write your code here.
    long long sum=0,x=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0){
            x++;
        }
        if(arr[i]==1){
            sum+=((x+1)*x )/2;
            x=0;
            
        }
        if(arr[i]==0 && i==n-1){
            sum+=((x+1)*x )/2;
            x=0;
            
        }
        
       
    }
     return sum;
}