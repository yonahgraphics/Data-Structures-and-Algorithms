class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:

        # Convert string into a list
        string_list = [char for char in s]

        # Get corresponding character and index
        for char, index in zip(s, indices):
            string_list[index] = char

        shuffled_string = ""
        # Convert list back to string
        for char in string_list:
            shuffled_string += char

        # return string
        return shuffled_string
