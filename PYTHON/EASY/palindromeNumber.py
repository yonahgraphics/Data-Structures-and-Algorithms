def isPalindrome(self, x: int) -> bool:
    intStr = str(x)
    return intStr == intStr[::-1]