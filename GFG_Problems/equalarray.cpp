
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> a, vector<ll> b, int n) {
        //code here
        bool ans=true;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
       for(long long i=0;i<n;i++)
       {
           if(a[i]==b[i])
           ;
           else
           ans=false;
           
       }
       return ans;
    }
};