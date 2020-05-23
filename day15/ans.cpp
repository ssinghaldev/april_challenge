class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> forward = {1};
        vector<int> backward = {1};
        
        for(int i = 0, j = 0; i < nums.size() - 1; i++, j++){
           forward.push_back(nums[i] * forward[j]);
        }
        
        for(int i = nums.size() - 1, j = 0; i > 0; i--, j++){
            backward.push_back(nums[i] * backward[j]);
        }
        
        vector<int> product_array;
        int i = 0;
        int j = backward.size() - 1;
        
        while(i < forward.size() && j > -1) {
            product_array.push_back(forward[i] * backward[j]);
            i++;
            j--;
        }
        
        return product_array;
    }
};




