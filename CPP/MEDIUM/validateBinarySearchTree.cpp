//
// Created by yonahgraphics on 2021/07/11.
//
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        list<int> mydata;
        inorderTraversal(root, mydata);

        int j = 0;
        int min = 0;
        for(int data: mydata)
        {
            if(data <= min && j > 0)
                return false;
            min = data;
            j++;
        }
        return true;

    }

    void inorderTraversal(TreeNode* root, list<int> &list)
    {
        if(!root)
            return;

        inorderTraversal(root->left, list);
        list.push_back(root->val);
        inorderTraversal(root->right, list);

    }
};