##================================================================================

#PROBLEM STATEMENT: Given a number of reviews including 5-star reviews,
#Find the minimun number of required additional
# 5-star reviews to reach a percentage target of five star reviews

##================================================================================

##APPROACH 1: ITERATIVE METHOD
##This approach will only help you understand the problem. It is not efficient, so please don't use it in an interview

def min_reviews(num_review, num_5star_reviews, target_percentage):
    count  = 0

    while((num_5star_reviews)*100/num_review < target_percentage ):
        num_5star_reviews += 1
        num_review        += 1
        count += 1
    return count

print(min_reviews(16,10,72))