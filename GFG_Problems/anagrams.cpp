class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        bool boo=false;
        int x;
        int n=a.size(),m=b.size();
       
     sort(a.begin(),a.end());
     
     sort(b.begin(),b.end());
     if(n>m)
      x=n;
     else
     x=m;
        for(int i=0;i<x;i++)
        {
            if(a[i]==b[i])
            ;
            else 
            return boo;
        }
        boo =true;
        return boo;
    }

};