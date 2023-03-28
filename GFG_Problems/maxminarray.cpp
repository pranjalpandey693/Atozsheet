
pair<long long, long long> getMinMax(long long arr[], int n) {
      pair<long long int ,long long int> a;
      long long int min=arr[0],max=arr[0];
      for(int i=0;i<n;i++)
      {
          if(min>=arr[i])
          {
              min=arr[i];
          }
          if(max<=arr[i])
       {
           max=arr[i];
       }
      
       
      }
       a=make_pair(min,max);
       return a;
}