class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();

        int count = 0;

        for(int i = 0; i < n; i++){
            int temp = nums[i];
            for(int j = i+1; j < n; j++){
                if(temp == nums[j]){
                    count++;
                }
            }
        }

        return count > 0;
    
    }
};