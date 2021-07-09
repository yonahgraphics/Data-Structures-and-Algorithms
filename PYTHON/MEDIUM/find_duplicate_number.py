'''
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
Example 3:

Input: nums = [1,1]
Output: 1
'''


def findDuplicate(nums):
    # Initialize
    tortoise = nums[0]
    hare = nums[0]

    # Loop till we find the duplicate number
    while True:
        # Hare moves twice as fast as the tortoise
        tortoise = nums[tortoise]
        hare = nums[nums[hare]]
        if hare == tortoise:
            break

    tortoise = nums[0]
    # Loop to get start point of the cycle as start
    # point will be the duplicate number
    while tortoise != hare:
        tortoise = nums[tortoise]
        hare = nums[hare]

    # Return the duplicate number
    return hare


# Sample input
nums = [1, 3, 4, 2, 2]
print(findDuplicate(nums))
## Outputs 2
