class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,j,currsum=nums[0],maxsum=nums[0];
        for(i=1;i<nums.size();i++)
        {
            if(currsum<0)
            {
                currsum=0;
            }
            currsum+=nums[i];
            maxsum=max(currsum,maxsum);
            
        }
        return maxsum;
        
    }
};