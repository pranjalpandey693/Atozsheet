  void bubbleSort(int arr[], int n)
    {
        // Your code here  
    
        for(int i=0;i<n;i++)
       {    bool swapped = false;
           for(int j=0;j<n-i-1;j++)
           {
               if(arr[j]>arr[j+1])
               {    swapped =true;
                   int temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
               }
           }
           if(swapped==false)
           break;
           
       }
    }