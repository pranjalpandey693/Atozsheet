class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int n, int k) 
    { 
       int lo=0,hi=n-1;
       while(hi-lo>1)
       {
           int mid =lo+(hi-lo)/2;
          
         
           if(k>arr[mid])
           { lo=mid+1;
               
           }
           else 
           hi=mid;
       }
       if(arr[lo]==k||arr[hi]==k)
       return 1;
       return -1;
       // Your code here
       
       
    }
};