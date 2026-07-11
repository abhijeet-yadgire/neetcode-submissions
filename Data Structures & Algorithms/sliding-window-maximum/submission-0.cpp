class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> ans;

        int n = nums.size();

        for(int i = 0; i <= n-k; i++){

            int left = i;
            int right = i+k;

            int max = nums[left];
            while(left < right){
                if(nums[left] > max){
                    max = nums[left];
                }
                left++;
            }
            ans.push_back(max);
        }
        return ans;
    }
};
