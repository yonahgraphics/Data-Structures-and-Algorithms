class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        # Index x and y values
        x = nums[:n]
        y = nums[n:]
        pair = []

        # Loop through the values of x and y and rearrange
        for x1, y1 in zip(x, y):
            pair.append(x1)
            pair.append(y1)

        return pair
