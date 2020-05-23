class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        h = [-stone for stone in stones]
        heapq.heapify(h)
        
        while len(h) >  1:
            f = heapq.heappop(h)
            s = heapq.heappop(h)
            if(f != s):
                heapq.heappush(h, f-s)
        
        return -heapq.heappop(h) if len(h) > 0 else 0
            
