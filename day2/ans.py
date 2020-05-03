def getDigits(n: int) -> list:
    return list(map(int, str(n)))    

class Solution:
    def isHappy(self, n: int) -> bool:
        numbers_processed = {}
        while True:
            digits = getDigits(n)
            sum_square_digits = sum([digit*digit for digit in digits])
            
            if sum_square_digits == 1:
                return True
            
            if sum_square_digits in numbers_processed:
                return False
            
            numbers_processed[n] = 1
            n = sum_square_digits