class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
   long long lo=0,hi=n-1;
   long long mid;
   while(hi-lo>1)
   { long long mid = lo+(hi-lo)/2;
     if(x<v[mid])
     {
         hi=mid-1;
     }
     else
     {
         lo=mid;
     }
     
       
   }
   if(v[hi]<=x)
     return hi;
     if(v[lo]<=x)
     return lo;
     
     
     return -1;
        // Your code here
        
    }
};
