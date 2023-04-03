
class Solution
{

public:
    int xmod11(string x)
    {
       // code here
  
	    int n=x.length();
        
            int r=0;
        
            for(int i=0;i<n;i++)
            {
               long long num=r*10+(int)(x[i]-'0');
               r=num%11;
            }
        
               return r;
	 
    }
};