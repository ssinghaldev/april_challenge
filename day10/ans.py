class Solution:
    def backspaceCompare(self, S: str, T: str) -> bool:
        s_actual = []
        for char in S:
            if char == '#':
                if s_actual:
                    s_actual.pop()
            else:
                s_actual.append(char)
        
        s_actual = ''.join(s_actual)
        
        t_actual = []
        for char in T:
            if char == '#':
                if t_actual:
                    t_actual.pop()
            else:
                t_actual.append(char)           
        
        t_actual = ''.join(t_actual)
        
        return s_actual == t_actual
