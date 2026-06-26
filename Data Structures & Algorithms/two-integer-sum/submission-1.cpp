class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            int temp = target - nums[i];
            for(int j = i+1; j < n; j++)
            {
                if(nums[j] == temp)
                {
                    ans = {i,j};
                }
            }
        }

        return ans;
    }
};
