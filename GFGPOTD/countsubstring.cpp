class Solution
{
    public:
    int countSubstring(string s)
    {
        // code here
        int cc=0,sc=0;
        int count=0;
        int n=s.size();
       
      for(int i=0;i<n;i++)
      {
                  cc=0;
                  sc=0;
                for(int z=i;z<n;z++)
                  {
                      if(s[z]>=97&&s[z]<=122)
                        sc++;
                  
                      if(s[z]>=65&&s[z]<=90)
                        cc++;
                     
                  if(cc==sc)
                  count++;
                  }
        }
        return count;
        
    }
};