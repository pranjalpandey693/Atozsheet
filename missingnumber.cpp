int missingNumber(int A[], int N)
{
    // Your code goes here
    int sum=0;
    for(int i=0;i<N-1;i++)
    {
        sum = sum+A[i];
        
    }
    int x= (N*(N+1)/2) -sum ;
    return x;
}