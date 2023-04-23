
class Solution{
public:
int gcd (int a, int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
    int minimumNumber(int n,vector<int> &arr){
        // Code here
        int d=arr[0];
        for(int i=0;i<n;i++){
            d=gcd(d,arr[i]);
        }
        return d;
    }
};