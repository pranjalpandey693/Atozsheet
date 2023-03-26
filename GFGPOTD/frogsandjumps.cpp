
class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<int> prime(leaves+1,0);
     int ans=0;
        for(int i=0;i<N;i++)
        {  int temp=frogs[i];
            if(temp<=leaves)
            if(prime[temp]==0)
            {
                for(int j=temp;j<=leaves;j+=temp)
                {
                    prime[j]=1;
                }
            }
        }
        for(int i=1;i<=leaves;i++)
        {
            if(prime[i]==0)
          
             ans++;
          
        }
      return ans;
       
    }
};