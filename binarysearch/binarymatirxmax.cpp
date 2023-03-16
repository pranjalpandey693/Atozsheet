
class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n ){
        //code here
  int mc=0;
  int mr=0;
  int i=0; 
  int j=n-1;
  while(j>=0 && i<n)
  {
      if(mat[i][j]==1)
      {
          j--;
          mr=i;
      }
      if(mat[i][j]==0)
      {
          i++;
      }
      mc = n-j-1;
  }
  vector<int> a;
  a.push_back(mr);
  a.push_back(mc);
  return a;
    
        
    }
};