class Solution {
  public:
    int minimumInteger(int n, vector<int> &a) {
        // code here
        long long sum=0;
        long ans=INT_MAX;
        for(int i=0;i<n;i++)
        {   sum+=a[i];
        }
        for(int i=0;i<n;i++)
        {  long x=a[i];
            if(sum<=n*x){
            if(ans>x)
           { ans=x;
             
           
           }}
        }
        return ans;
    }
};
