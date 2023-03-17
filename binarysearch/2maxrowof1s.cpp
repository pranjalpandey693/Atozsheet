//binary search
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	   int row=-1;
	   int count =10000;
	    for(int i=0;i<n;i++)
	    {    int lo=0;
	        int hi=m-1;
	     
	        while(hi-lo>=1)
	        {    int mid=lo+(hi-lo)/2;
	            if(arr[i][mid]==1)
	        hi=mid;
	        else if(arr[i][mid]==0)
	        lo =mid+1;
	            
	        }
	        if(arr[i][lo]==1 )
	       {
	           if(count>hi)
	          { count =hi;
	           row=i;
	           
	          }
	        
	       }
	    }
	    return row;
	    
	    
	}

};


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
