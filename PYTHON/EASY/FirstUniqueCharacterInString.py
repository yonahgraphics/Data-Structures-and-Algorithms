
# EXPLANATION

# ------------------------------------------------------------------------------------------------------
# Use a map/dictionary to keeper of each letter count in a string. Check if the letter is not it the
# hashmap and if not, put it there and increase its count by 1. At the end, you want the first letter
# whose count is exactly 1. Get it's index and you're done.
# -----------------------------------------------------------------------------------------------------


class Solution:
    def firstUniqChar(self, s: str) -> int:
        trackedLetters = {}

        for letter in s:
            if letter in trackedLetters:
                trackedLetters[letter] += 1
            else:
                trackedLetters[letter] = 1

        for letter in s:
            if trackedLetters[letter] == 1:
                index = s.index(letter)
                return index
        return -1
