class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        std::unordered_map<int, int> count_idx;
        count_idx.insert({{0, -1}});
        
        int count = 0;
        int max_len = 0;
        for(int i = 0; i < nums.size(); i++) {
            nums[i] == 0? count-- : count++;
            if(count_idx.find(count) != count_idx.end()) {
                max_len = max(max_len, i - count_idx[count]);
            } else {
                count_idx[count] = i;
            }
        }
        
        return max_len;
    }
};
