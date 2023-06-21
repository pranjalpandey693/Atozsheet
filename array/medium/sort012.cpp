
void sort012(int a[], int n)
{
     int x=0;
     for(int i=0;i<n;i++){
         if(a[i]==0){
         int temp;
         temp=a[x];
         a[x]=a[i];
         a[i]=temp;
             x++;
         }
     }
         
     for(int i=0;i<n;i++){
         if(a[i]==1){
         int temp;
         temp=a[x];
         a[x]=a[i];
         a[i]=temp;
             x++;
         }
     }
    
}