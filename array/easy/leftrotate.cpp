class Solution{
	
	
	public:
	void leftRotate(int arr[], int K, int n) 
	{ 
	   // Your code goes here
	   int k=K%n;
	   
	  for(int i=0,j=k-1;i<k/2;i++,j--)
	  {
	     int temp=arr[i];
	     arr[i]=arr[j];
	     arr[j]=temp;
	  }
	   for(int i=k,j=n-1;i<k+(n-k)/2;i++,j--)
	  {
	     int temp=arr[i];
	     arr[i]=arr[j];
	     arr[j]=temp;
	  }
	  for(int i=0,j=n-1;i<n/2;i++,j--)
	  {
	     int temp=arr[i];
	     arr[i]=arr[j];
	     arr[j]=temp;
	  }
	} 
		 

};