//binary search



// brute force 
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int row=-1;
	    int count=10000;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {    
	            if(arr[i][j]==1)
	           {    if(count>j){
	               row =i;
	               count=j;
	               continue;}
	           }
	        }
	    }
	    return row;
	}
