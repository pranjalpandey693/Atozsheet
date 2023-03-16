class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=i+1;
        vector<int> :: iterator it;
        
        while(j<nums.size())
        {
            if(nums[i]==nums[j])
            { 
                it = nums.begin()+j;
               nums.erase(it);
            }
            else if (nums[i]!=nums[j])
            {
                i++;
                j++;
            }

        }
        return nums.size();
    }
};