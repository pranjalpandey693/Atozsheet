
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    for(int i=0;i<N;i++)
	{
	    for(int j=0;j<M;j++)
	    {
	        if(X==mat[i][j])
	        return 1;
	        
	    }
	}
	return 0;
	}
};