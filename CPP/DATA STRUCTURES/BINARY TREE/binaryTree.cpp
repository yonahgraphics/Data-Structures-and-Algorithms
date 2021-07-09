//
// Created by yonahgraphics on 2021/07/08.
//

#include <iostream>
#include <cstring>

struct Node{
    int data;
    Node* leftPtr;
    Node* rightPtr;
};

class binaryTree{
private:
    Node* root;

public:
    binaryTree(){
        root = NULL;
    }

    //Destroying a tree
    void destroyTree(Node* node)
    {
        if(node != NULL){
            destroyTree(node->leftPtr);
            destroyTree(node->rightPtr);
            delete node;
        }

    }

    ~binaryTree(){
        destroyTree(root);
    }


    //Inserting into a tree
    void insert(int value, Node* root){
        if( value < root->data){
            if(root->leftPtr == NULL){
                root->leftPtr = new Node;
                root->leftPtr->data = value;
                root->leftPtr->leftPtr = NULL;
                root->leftPtr->rightPtr = NULL;
            }
            else{
                insert(value, root->leftPtr);
            }
        }
        else{
            if(root->rightPtr == NULL){
                root->rightPtr = new Node;
                root->rightPtr->data = value;
                root->rightPtr->leftPtr = NULL;
                root->rightPtr->rightPtr = NULL;
            }
            else{
                insert(value, root->rightPtr);
            }
        }
    }

    void insert(int value)
    {
        if(root == NULL)
        {
            root = new Node;
            root->data = value;
            root->leftPtr = NULL;
            root->rightPtr = NULL;
        }
        else{
            insert(value , root);
        }
    }

    //Inorder traversal
    void inorderPrint(Node* root){
        if(!root)
            return;

        inorderPrint(root->leftPtr);
        printf("%d, ", root->data);
        inorderPrint(root->rightPtr);

    }

    void inorderPrint(){
        inorderPrint(root);
    }

    //get the sum of elements in the tree
    int treeSum(){
        return  treeSum(root);
    }

    int treeSum(Node* root){
        if(!root)
            return 0;
        int  leftSum = treeSum(root->leftPtr);
        int  rightSum = treeSum(root->rightPtr);
        return root->data + leftSum + rightSum;
    }

    //Get maximum value in the tree. Can also be changed to return the minimum
    int treeMax(){
        treeMax(root);
    }
    int treeMax(Node* root){
        if(!root)
            return -1;
        int leftMax = treeMax(root->leftPtr);
        int rightMax = treeMax(root->rightPtr);
        int max;
        if(root->data > leftMax && root->data > rightMax)
            max = root->data;
        else if(leftMax > root->data  && leftMax > rightMax)
            max = leftMax;
        else
            max = rightMax;
        return max;
    }

    //Get the height of a tree
    int treeHeight(Node* root){
        if (root == NULL)
            return 0;
        int leftHeight = treeHeight(root->leftPtr);
        int rightHeight = treeHeight(root->rightPtr);
        int max;
        if(leftHeight > rightHeight)
            max = leftHeight;
        else
            max = rightHeight;
        return  1+ max;
    }

    int treeHeight(){
        treeHeight(root);
    }

    //Check if a value exists in a tree
    bool valueExists(Node* root, int value){
        if (!root)
            return false;
        if(root->data == value)
            return true;
        bool valueInRight = valueExists(root->rightPtr, value);
        bool valueInLeft  = valueExists(root->leftPtr, value);
        return valueInLeft || valueInRight;
    }

    bool valueExists(int value){
        valueExists(root, value);
    }

    //Reverse a binary tree
    void reverseTree(Node* root){
        if (root ==NULL)
            return;
        reverseTree(root->leftPtr);
        reverseTree(root->rightPtr);
        Node* temp = new Node();
        temp = root->rightPtr;
        root->rightPtr = root->leftPtr;
        root->leftPtr = temp;
    }
    void  reverseTree(){
        reverseTree(root);
    }

};


//Driver code
int main(){
    binaryTree* tree = new binaryTree();
    tree->insert(2);
    tree->insert(3);
    tree->insert(1);
    tree->insert(7);
    tree->insert(0);
    tree->insert(-1);
    tree->insert(1);
    printf("\nInorder before reversing a tree\n");
    tree->inorderPrint();
    printf("\nSum = %d", tree->treeSum());
    printf("\nMax = %d", tree->treeMax());
    printf("\nHeight = %d", tree->treeHeight());
    int value = 5;
    printf(tree->valueExists(value)== true?"\n%d exists in tree":"\n%d doesn't exist in tree", value);
    tree->reverseTree();
    printf("\nInorder after reversing a tree\n");
    tree->inorderPrint();
    // delete tree
    delete tree;
    printf("\nAfter deleting the tree");
    tree->inorderPrint();

    return 0;
}