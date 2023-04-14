
class Solution {
  public:
    int finLength(int n, vector<int> c, vector<int> r) {
        stack<int> a,b;
       int  count =n;
        a.push(c[0]);
        b.push(r[0]);
        for(int i=1;i<n;i++)
        { 
            if(c[i]==a.top()){
                if(r[i]==b.top())
                { count=count-2;
                  a.pop();
                  b.pop();
                  if(a.empty())
                  {
                      a.push(c[i+1]);
                      b.push(r[i+1]);
                      i++;
                      i++;
                      
                  }
                }
                else 
                {
                     a.push(c[i]);
        b.push(r[i]);
                }
            }
            else {
                 a.push(c[i]);
        b.push(r[i]);
            }
            
            
        }
        return count;
    }
};