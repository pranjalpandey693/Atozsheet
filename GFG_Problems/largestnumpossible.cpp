
class Solution{
public:
    string findLargest(int N, int S){
        // code here
     long long  num=0;
     string str = "";
            
        if(S==0&&N>1||S>9*N)
        {num=-1;
        str = to_string(num);
        return str;
        }
        else{
        
        while(N){
            if(N>=1){
                num=0;
                if(S>=9){
                num=num*10+9;
                N--;
                S=S-9;
                 str += to_string(num);
                
            }
            else if(S<9) {
                num=num*10+S;
                N--;
                S=0;
                 str += to_string(num);
            }
            else if(S==0)
            {
                num=num*10;
                N--;
                 str += to_string(num);
            }
        
            }
            
           
            }
        }
           
            return str;
            
        
    }
   
};