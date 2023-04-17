 void selectionSort(int arr[], int n)
    {
       //code here
       
    for(int i=0;i<=n-2;i++)
    {     
           int mini=i;
        for(int j=i;j<=n-1;j++)
        {   if(arr[mini]>arr[j])
              {  
              mini=j;
                  
              }
              
            
        }
        swap(arr[i],arr[mini]);
        
    }
    }