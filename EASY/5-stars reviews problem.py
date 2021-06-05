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

# --------------------------------------------------------------------------------

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


# Sample input:
# num_5star_reviews = 10
# num_review = 16
# target_percentage = 72

print(min_reviews(16, 10, 72))

# APPROACH 2:  FINDING THE FORMULA FOR GETTING ADDITIONAL F-STAR REVIEWS
# Here we simply make the required reviews the subject of the formular below and boom!
