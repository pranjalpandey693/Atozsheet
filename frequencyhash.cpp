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

//without using extra space
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
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