class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> pq  = {std::begin(stones), std::end(stones)};
        while(pq.size() > 1) {
            auto first = pq.top();
            pq.pop();
            
            auto second = pq.top();
            pq.pop();
            
            if(first != second) {
                pq.push(std::abs(first - second));
            }
        }
        
        if(pq.empty()) {
            return 0;
        }
        
        return pq.top();
    }
};
