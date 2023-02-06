pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    pair<int,int>pair;
    sort(arr,arr+n);
   int lo=0,hi=n-1;
   while(hi-lo>1)
   {
       int mid=lo+(hi-lo)/2;
       if(x<=arr[mid])
       {
          hi=mid;
       }
       else
       { 
           lo=mid;
       }
   }
  if(arr[hi]<=x)
  pair.first=arr[hi];
  else    if(arr[lo]<=x)
   pair.first=arr[lo];
   else 
   pair.first= -1;
  
  if(arr[lo]>=x)
  pair.second=arr[lo];
   else if(arr[hi]>=x)
   pair.second=arr[hi];
   else 
   pair.second=-1;
   
   return pair;
    
}