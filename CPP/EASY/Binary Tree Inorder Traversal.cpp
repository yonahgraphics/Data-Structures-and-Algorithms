//
// Created by yonahgraphics on 2021/07/09.
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


//------------------------------------------------------
//METHOD1: RECURSIVE  APPROACH
//-------------------------------------------------------

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> myVec;
        helper(root, myVec);
        return myVec;

    }

    void helper(TreeNode* root, vector<int> &vec){

        if(!root)
            return;
        helper(root->left, vec);
        vec.push_back(root->val);
        helper(root->right, vec);
    }

};

//------------------------------------------------------
//METHOD2: ITERATIVE APPROACH
//-------------------------------------------------------
class Solution {
public:

    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)
            return {};
        stack<TreeNode*> myStack;
        TreeNode* currNode = root;
        vector<int> intVec;

        while(currNode != nullptr || !myStack.empty()){
            while(currNode != nullptr){
                myStack.push(currNode);
                currNode = currNode->left;
            }

            TreeNode* poppedNode = myStack.top();
            myStack.pop();
            intVec.push_back(poppedNode->val);
            currNode = poppedNode->right;

        }

        return intVec;
    }

};