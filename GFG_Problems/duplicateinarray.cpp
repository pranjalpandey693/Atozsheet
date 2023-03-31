class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        int a[n]={0};
        for(int i=0;i<n;i++)
    {
        a[arr[i]]++;
    }
    vector<int> ar;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=2)
        {
            ar.push_back(i);
        }
        
    }
    if(ar.empty())
    { ar.push_back(-1);
    return ar;
    }
    else
    return ar;
    }
};