# --------------------------------------------------------------------------------

# PROBLEM STATEMENT: Given a number of reviews including 5-star reviews,
# Find the minimum number of required additional
# 5-star reviews to reach a percentage target of five star reviews

# -----------------------------------
# CONSTRAINTS
# ---------------------------------
# num_review > 0
# num_5star_reviews <= num_review
# 0 <= target <= 100

# ----------------------------------------------------------------------------------

# APPROACH 1: ITERATIVE METHOD
# This approach will only help you understand the problem. It is not efficient,
# so please don't use it in an interview, use approach 2


def min_reviews(num_review, num_5star_reviews, target_percentage):
    count = 0

    while num_5star_reviews * 100 / num_review < target_percentage:
        num_5star_reviews += 1
        num_review += 1
        count += 1
    return count


# -----------------------------------------------------------------
# Complexity:
# Since we are just doing arithmetic operation, this takes
# T(n) = O(n), where n = minimum number of required 5-star reviews
# ------------------------------------------------------------------

# Sample input:
# num_5star_reviews = 10
# num_review = 16
# target_percentage = 72
# Expected output = 6

# Sample call to function
print(min_reviews(16, 10, 72))

# APPROACH 2:  FINDING THE FORMULA FOR GETTING ADDITIONAL F-STAR REVIEWS
# Here we simply make the required reviews the subject of the formula below and boom!

# -------------------------------
# FORMULA
# -------------------------------
# Let a = num_5star_reviews
# Let b = num_review
# let c = target_percentage

# (a + x)*100 / (b + x) >= c
# (a + x)*100 >= c(b + x)
# 100a + 100x >= cb + cx
# x >= (cb - 100a)/(100 - c)
# -------------------------------

import math  # We need this import because we might get a floating point number and have to round it up


def min_reviews_better(b, a, c):
    x = (c * b - 100 * a) / (100 - c)
    return math.ceil(x)


# -------------------------------------------------------
# Complexity:
# Since we are just doing arithmetic operation, this takes
# T(n) = O(1)
# --------------------------------------------------------
# Sample call to function
print(min_reviews_better(16, 10, 72))
