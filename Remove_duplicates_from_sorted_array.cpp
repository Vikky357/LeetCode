class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        if(nums.size()==0)
        {
            return 0;
        }
        for(auto i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
        return j+1;
        
    }
};
