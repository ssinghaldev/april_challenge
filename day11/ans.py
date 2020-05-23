class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.actual = []
        self.min_val = []
        

    def push(self, x: int) -> None:
        self.actual.append(x)
        if not self.min_val or x < self.min_val[-1]:
            self.min_val.append(x)
        else:
            self.min_val.append(self.min_val[-1])

    def pop(self) -> None:
        self.actual.pop()
        self.min_val.pop()

    def top(self) -> int:
        return self.actual[-1]

    def getMin(self) -> int:
        return self.min_val[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
