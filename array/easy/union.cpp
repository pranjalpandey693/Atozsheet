class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i=0;
        int j=0;
        int z=0;
        vector<int> arr;
        if(arr1[0]>arr2[0])
        {
        arr.push_back(arr2[0]);
     j++;  
     z++;}
        else 
        {arr.push_back(arr1[0]);
           i++;
            z++;
        }
        while(i+j<m+n){
            if(i<n&&j<m){
            if(arr1[i]>arr2[j] )
            {
                if(arr2[j]!=arr[z-1])
                {
                    arr.push_back(arr2[j]);
                    z++;
                    j++;
                }
                else
                j++;
            }
            else
            {  if(arr1[i]!=arr[z-1])
                {
                    arr.push_back(arr1[i]);
                    z++;
                    i++;
                }
                else 
                i++;
                
            }
        }
        else if(i<n){
             if(arr1[i]!=arr[z-1])
                {
                    arr.push_back(arr1[i]);
                    z++;
                    i++;
                }
                else 
                i++;
                
        }
        else if(j<m){  
            
            if(arr2[j]!=arr[z-1])
                {
                    arr.push_back(arr2[j]);
                    z++;
                    j++;
                }
                else
                j++;
            
        }
        
        }
        return arr;
        
    }
};