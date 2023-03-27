// method 1 count the all zeros and apppend them after all the non-zero values 
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	   vector<int> a;
	   int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        a.push_back(arr[i]);
	        else 
	        count++;
      	}
      	for(int i=0;i<count;i++)
      	a.push_back(0);
      	for(int i=0;i<n;i++)
      	arr[i]=a[i];
	}
};

//method 2 using two pointer method