class Solution
{
    public:
    void insert(int arr[], int n)
    {
        //code here
        if(n<1)
        return;
        insert(arr,n-1);
        
        while(n>0&& arr[n]<arr[n-1])
        {
    
             int temp=arr[n-1];
              arr[n-1]=arr[n];
              arr[n]=temp;
            
            n--;
            
         
       }
        
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //function call here because array will go 0 to n-1 not 0 to n
        insert(arr,n-1);
       
    }
};