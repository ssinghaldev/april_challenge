class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> anagram_map;
        for(auto& s: strs) {
            anagram_map[countingSort(s)].push_back(s);
        }
        
        std::vector<std::vector<string>> ans;
        ans.reserve(anagram_map.size());
        for(auto& kv: anagram_map) {
            ans.push_back(std::move(kv.second));
        }
        
        return ans;
    }

private:
    string countingSort(string& s) {
        char count[26] = {0};
        for(auto c: s) {
            count[c - 'a'] += 1;
        }
        
        string sort_s;
        for(int i = 0; i < 26; i++) {
            sort_s.append(count[i], 'a' + i);
        }
        return sort_s;
    }
};
