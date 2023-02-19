// using extra space
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int n, int p)
    { 
        // code here
        int hash[100000]={0};
        for(int i=0;i<n;i++)
        {
        hash[arr[i]-1]++;
            
        }
        for(int j=0;j<n;j++)
        {
            arr[j]=hash[j];
        }
        
    }
};

//without using extra space m2
class Solution{
    public:

    void frequencyCount(vector<int>& arr,int n, int p)
    { 
        // code here
        
    int i=0;
    while(i<n
    {
        if(arr[i]<=0)
        {
            i++;
            continue;
        }
        //ei = element index
        int ei = arr[i]-1;
        if(arr[ei]>0)
        {  
            arr[i]=arr[ei];
            arr[ei]=-1;
            
        }
        else 
        {
            arr[ei]--;
            arr[i]=0;
            i++;
        }
    }
 
for(int j=0;j<n;j++)
 {
     arr[j]= abs(arr[j]);
    
 }
        
    } 
};

//m3 
void printfrequency(int arr[],int n)
{
    // Subtract 1 from every element so that the elements
    // become in range from 0 to n-1
    for (int j =0; j<n; j++)
        arr[j] = arr[j]-1;
 
    // Use every element arr[i] as index and add 'n' to
    // element present at arr[i]%n to keep track of count of
    // occurrences of arr[i]
    for (int i=0; i<n; i++)
        arr[arr[i]%n] = arr[arr[i]%n] + n;
 
    // To print counts, simply print the number of times n
    // was added at index corresponding to every element
    for (int i =0; i<n; i++)
        arr[i] = arr[i]/n ;
}
 