
int transitionPoint(int arr[], int n) {
    // code here
   
   int h=n-1;
   int l=0;
   int mid;
   if(arr[0]==1)
   return 0;
   while(h-l>=0){
        mid =l+(h-l)/2;
       if((arr[mid]==1)&&(arr[mid-1]<1))
       return mid;
       else if(arr[mid]==0)
       l=mid+1;
       else 
       h=mid;
       
   }
   return -1;
}