class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int running_sum = 0;
        for(int num: nums) {
            running_sum += num;
            if(running_sum > max_sum) {
                max_sum = running_sum;
            }
            
            if(running_sum < 0) {
                running_sum = 0;
            }
        }
        
        return max_sum;
        
    }
};
