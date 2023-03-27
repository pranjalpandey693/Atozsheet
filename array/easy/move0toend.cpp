// method 1 count the all zeros and apppend them after all the non-zero values 
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
 vector<int> a;
	 
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        a.push_back(arr[i]);
	      
      	}
      	for(int i=a.size();i<n;i++)
      	a.push_back(0);
      	for(int i=0;i<n;i++)
      	arr[i]=a[i];
	}
};

//method 2 using two pointer to swap the elements
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i=0,j=0;
	    while(i<n)
	    {
	        if(arr[i]!=0)
	        {
	            int temp=arr[i];
	            arr[i]=arr[j];
	            arr[j]=temp;
	            j++;
	            i++;
	        }
	        else 
	        i++;
	    }
	    for(int k=j;k<n;k++)
	    arr[k]=0;
	}
};