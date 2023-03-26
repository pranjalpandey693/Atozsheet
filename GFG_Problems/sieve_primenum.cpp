class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        int prime[9999]={0};
        vector<int> vec;
        for(int i=2;i<=n;i++)
        {
            if(prime[i]==0)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    prime[j]=1;
                }
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(prime[i]==0)
            vec.push_back(i);
        }
        return vec;
    }
};