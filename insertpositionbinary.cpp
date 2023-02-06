class Solution{
    public:
    int searchInsertK(vector<int>A, int n, int k)
    {
        // code here
        int lo=0,hi=n-1;
        while(hi-lo>1)
        {
            int mid=lo+(hi-lo)/2;
            if(k>A[mid])
            {
                lo=mid+1;
            }
            else 
            hi=mid;
        }
        if(A[hi]==k)
        return hi;
        if(A[lo]==k)
        return lo;
        
        if(A[hi]<k)
        return hi+1;
        
        if(A[lo]>k)
        return lo;
        
        if(A[hi]>k)
        return hi;
        
        
        
        
    }
};