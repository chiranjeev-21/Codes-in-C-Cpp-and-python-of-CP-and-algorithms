from collections import Counter 
 
class Solution: 
    def solve(self, items, n): 
        c = Counter(items) 
        ans = len(c) 
        freq = sorted(c.values()) 
        i = 0 
        while i < len(freq): 
            if freq[i] <= n: 
                n -= freq[i] 
                ans -= 1 
            else: 
                return ans 
            i += 1 
        return 0 
          
ob = Solution() 
items = [1,1,1,2,3,2] 
n = 2 
print(ob.solve(items, n))