
class Solution{
public:
    int inSequence( long long  A, long long  B, long long C){
     
     if(C==0){
            return A==B;
        }
       return (B-A)%C==0 && (B-A)/C>=0;
    }
};