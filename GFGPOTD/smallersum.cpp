class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &a){
        // Code here
//         vector<int>ar;
//         ar=arr;
//   sort(ar.begin(),ar.end());
//   vector<long long> ans;
//   long long sum;
   
//   int l,h;
//   for(int i=0;i<n;i++){
//       l=0;
//       h=n;
//       int mid;
//       int x=arr[i];
//       while(h-l>0){
//          mid=l+(h-l)/2;
//          if((mid==0)||(ar[mid]==x&&x>ar[mid-1]))
//          break;
//          else if(x>ar[mid])
//          l=mid+1;
//          else 
//          h=mid;
//       }
//       sum=0;
//   if(mid!=0){
//       for(int i=0;i<mid;i++)
//       {
//           sum+=ar[i];
//       }
//       ans.push_back(sum);
//   }    
//   else
//   ans.push_back(0);
//   }
  
  
//   return ans;

          vector<pair<int,int>>v; 
                 vector<long long>ans(n);

                 unordered_map<int,int>m;

                  for(int i=0;i<n;i++){
                     v.push_back({a[i],i+1});
                     m[a[i]]++;
                  }

                 sort(v.begin(),v.end());

                 long long sum=0;

                 for(int i=0;i<n;i++){
                    sum+=v[i].first;
                    ans[v[i].second-1]=sum;
                 }

                for(int i=n-1;i>=0;i--){
                   ans[i]-=m[a[i]]*a[i];
                   m[a[i]]--;
                }
        
               return ans;
   
    }
};