from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram_map = defaultdict(list)
        for s in strs:
            anagram_map[self.eleCount(s)].append(s)
        
        return anagram_map.values()
    
    def eleCount(self, s):
        count = [0]*26
        for c in s:
            count[ord(c) - ord('a')] += 1
        
        return tuple(count)
