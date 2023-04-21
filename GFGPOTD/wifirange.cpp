
class Solution{
    public:
    bool wifiRange(int n, string s, int x){
        // code here
    bool ans=false;
        for(int i=0;i<n;i++){
            if((s[i]-48)==1){
                for(int j=1;j<=x&&i+j<n;j++)
                {
                    if((s[i+j]-48)==0)
                    s[i+j]=2;
                    
                }
                
            }
        }
        for(int i=n-1;i>=0;i--){
            if((s[i]-48)==1){
                for(int j=1;j<=x&&i-j>=0;j++)
                {
                    if((s[i-j]-48)==0)
                    s[i-j]=2;
                    
                }
                
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]-48==0)
            return ans;
            
        }
        ans=true;
        return ans;
        
    }
};