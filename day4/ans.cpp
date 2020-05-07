class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int insert_idx = 0;
        for(unsigned int current_idx = 0; current_idx < nums.size(); current_idx++) {
            if(nums[current_idx] != 0) {
                if(current_idx > insert_idx) {
                    swap(nums[insert_idx], nums[current_idx]);
                }
                insert_idx += 1;
            }
        }
    }
};
