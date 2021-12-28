# INTERVIEW QUESTIONS
## (CODING CHALLENGES ASKED BY POPULAR COMPANIES)

 <div id="banner">
    <div class="inline-block"> 
        <img src = "https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/facebook.png" width="100" height="100">
        <img src = "https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/amazon.png" width="100" height="100">
        <img src = "https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/Apple.jpg" width="100" height="100">
        <img src = "https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/Netflix.png" width="100" height="100">
        <img src = "https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/google.png" width="100" height="100">
    </div>
</div>
 
 <p>
Solving coding problems everyday keeps your mind sharp, makes you a great thinker and keeps you healthy :satisfied: :satisfied: :satisfied: <p>
In this repository you will find solutions to pupular coding problems asked by big tech companies like Facebook, Amazon Apple Netflix, Google Microsoft etc. I try to make the code as clear as possible, and the goal is be to used as a learning resource and a way to lookup specific problems easly. 
If have any questions or suggestions, please don't be afraid to ask. This repository is contribution friendly, so if you feel you want to contribute I'd happy to merge :blush::blush::blush:



# EASY

 #### 5-stars reviews problem  -------<b> T(n) = O(1)<b>
 
- [Python](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/PYTHON/EASY/5-stars%20reviews%20problem.py)
- [Cpp](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/CPP/EASY/5-stars%20reviews%20problem.cpp)
- [Java](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/JAVA/EASY/src/FiveStarsReviewsProblem.java)
 
 #### Binary tree inorder traversal<b>
 
  Find original question on <a href = "https://leetcode.com/problems/binary-tree-inorder-traversal/"> leetcode

- [Cpp](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/CPP/EASY/Binary%20Tree%20Inorder%20Traversal.cpp)
 
 
 #### First Unique Character in a string<b>
  Find original question on <a href = "https://leetcode.com/problems/first-unique-character-in-a-string/"> leetcode</a>

- [Python](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/PYTHON/EASY/FirstUniqueCharacterInString.py)
- [Cpp]( https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/CPP/EASY/firstUniqueChar.cpp)
 

 #### Reverse String<b>
  Given a string, can you reverse it? e.g software ---->erawtfos

- [Java](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/JAVA/EASY/src/reverseString.java)
 
- [Cpp](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/CPP/EASY/reverseString.cpp)
 
- [Python](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/PYTHON/EASY/reverseString.py)
 
 
 #### Reverse Array<b>
  Given an array, can you reverse it? e.g [1,2,3,4] -------->[4,3,2,1]

- [Java](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/JAVA/EASY/src/reverseArray.java)
 
- [Cpp](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/CPP/EASY/reverseArray.cpp)
 
- [Python](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/PYTHON/EASY/reverseArray.py)
 
 
 #### Shuffle String<b>
  Find original question on <a href = "https://leetcode.com/problems/shuffle-string/"> leetcode

- [Cpp](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/CPP/EASY/shuffleString.cpp)
 
- [Python](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/PYTHON/EASY/shuffleString.py)
 
 
 #### Shuffle Array<b>
  Find original question on <a href = "https://leetcode.com/problems/shuffle-the-array/"> leetcode

- [Cpp](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/CPP/EASY/shuffleArray.cpp)
 
- [Python](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/PYTHON/EASY/shuffleArray.py)
 
 
 #### Valid Palindrome<b>
  Find original question on <a href = "https://leetcode.com/problems/valid-palindrome/"> leetcode

- [Python](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/PYTHON/EASY/validPalindrome.py)
 
 
 #### Palindrome Number<b>
  Find original question on <a href = "https://leetcode.com/problems/palindrome-number/"> leetcode

- [Python](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/PYTHON/EASY/palindromeNumber.py)
 
 
 #### Valid Anagram<b>
  Given two strings s1 and s2, check if they are valid anagrams. Two strings are anagrams if they are made of the same characters with the same frequencies

### Method 1<n>
 
```
def check_anagram(s1, s2):
    if len(s1) != len(s2):
       return False
    counter1 = dict()
    counter2 = dict()
    
    
    for char in s1:
        if char in counter1:
            counter1[char] += 1
        else:
            counter1[char] = 1
    
    for char in s2:
        if char in counter2:
            counter2[char] += 1
        else:
            counter2[char] = 1
        
    if counter1 == counter2:
        return True
     return False
```
### Complexity <b>
 ```
 T(n) = O(n) for traversing the first string + O(n) for traversing the second string + O(n) for comparing the strings = O(n)
 S(n) = O(n) for the first dictionary + O(n) for the second dictionary  = O(n)
 ```
 
### Method 2  <b>
 ```
 def check_anagram(s1, s2):
     return sorted(s1) == sorted(s2) 
 ```
 
 ### Complexity <b>
 ```
 T(n) = O(nlogn) for sorting the first string + O(nlogn) for sorting the second string + O(n) for comparing the sorted strings  = O(nlogn)
 S(n) = O(n) for storing sorted string1 + O(n) for storing sorted string2  = O(n)
 ```
 
 
# MEDIUM
 #### Find a duplicate number in the array (Floyd's tortoise and hare) -------<b> O(n) time and O(1) extra space<b>
 Find original question on <a href = "https://leetcode.com/problems/find-the-duplicate-number/"> leetcode</a>
- [Python](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/PYTHON/MEDIUM/find_duplicate_number.py)
- [Cpp](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/CPP/MEDIUM/findDuplicateNumber.cpp)
 
 #### Validate Binary Search Tree -------<b> O(n) time and O(n) extra space<b>
 Find original question on <a href = "https://leetcode.com/problems/validate-binary-search-tree/"> leetcode</a>
- [Cpp](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/CPP/MEDIUM/validateBinarySearchTree.cpp)
# HARD<br/><br/><br/><br/><br/><br/><br/><br/>


# DATA STRUCTURES
 ### BINARY TREE
 Popular non-linear data structure. A tree whose elements have at most 2 children is called a binary tree. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.
 Read about binary trees <a href = "https://www.geeksforgeeks.org/binary-tree-data-structure/"> here</a>
 
- [Cpp](https://github.com/yonahgraphics/Data-Structures-and-Algorithms/blob/master/CPP/DATA%20STRUCTURES/BINARY%20TREE/binaryTree.cpp)
 
 ### LINKEDLIST
 A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers. 
 Read about binary trees <a href = "https://www.geeksforgeeks.org/data-structures/linked-list/"> here</a>
