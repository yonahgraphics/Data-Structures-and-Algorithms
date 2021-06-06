//
// Created by yonahgraphics on 2021/06/06.
//

/*
 --------------------------------------------------------------------------------

 PROBLEM STATEMENT: Given a number of reviews including 5-star reviews,
 Find the minimum number of required additional
 5-star reviews to reach a percentage target of five star reviews

 -----------------------------------
 CONSTRAINTS
 ---------------------------------
 num_review > 0
 num_5star_reviews <= num_review
 0 <= target <= 100
*/



import java.lang.Math;// We need this import because we might get a floating point number and have to round it up

public class FiveStarsReviewsProblem{
/*
 --------------------------------------------------------------------------------

 APPROACH 1: ITERATIVE METHOD
 This approach will only help you understand the problem. It is not efficient,
 so please don't use it in an interview, use approach 2
*/

    static  int  min_reviews(int num_review, int num_5star_reviews, float target_percentage) {
        int count = 0;

        while (num_5star_reviews * 100 / num_review < target_percentage) {
            num_5star_reviews += 1;
            num_review += 1;
            count += 1;
        }

        return count;


    }

/* -----------------------------------------------------------------
 Complexity:
 Since we are just doing arithmetic operation, this takes
 T(n) = O(n), where n = minimum number of required 5-star reviews
 ------------------------------------------------------------------
*/


/*
 APPROACH 2:  FINDING THE FORMULA FOR GETTING ADDITIONAL F-STAR REVIEWS
 Here we simply make the required reviews the subject of the formula below and boom!

 -------------------------------
 FORMULA
 -------------------------------
 Let a = num_5star_reviews
 Let b = num_review
 let c = target_percentage

 (a + x)*100 / (b + x) >= c
 (a + x)*100 >= c(b + x)
 100a + 100x >= cb + cx
 x >= (cb - 100a)/(100 - c)
 -------------------------------
*/

    static int min_reviews_better(int b, int a, float c) {
        float x = (c * b - 100 * a) / (100 - c);
        return (int) Math.ceil(x);
    }
/*
 -------------------------------------------------------
 Complexity:
 Since we are just doing arithmetic operation, this takes
 T(n) = O(1)
 --------------------------------------------------------
 */

    /* Sample input:
    num_5star_reviews = 10
    num_review = 16
    target_percentage = 72
    Expected output = 6
    */

    public static void main(String[] args)
    {
        // Sample call to functions
        System.out.println(min_reviews(16, 10, 72));
        System.out.println(min_reviews_better(16, 10, 72));

    }
}