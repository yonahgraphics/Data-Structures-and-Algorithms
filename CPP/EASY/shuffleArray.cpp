//
// Created by yonahgraphics on 2021/07/14.
//
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> intVec;

        //Loop from the beginning to n (the middle)
        for(int i = 0; i < n; i++)
        {
            intVec.push_back(nums[i]);
            intVec.push_back(nums.at(n+i));
        }

        return intVec;
    }
};

