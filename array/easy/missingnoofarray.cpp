
class Solution{
  public:
    int MissingNumber( vector<int>& array, int n) {
        // Your code goes here
             int x=0,y=0;
        for(int i=0;i<n-1;i++)
        { x=x+array[i];  
        
            
        }
        y=n*(n+1)/2;
        return y-x;
    }
};