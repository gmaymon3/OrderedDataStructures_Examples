#include "BinaryTree.h"
#include <iostream>
using namespace std;

BinaryTreeNode* BinaryTree::insert(BinaryTreeNode* node, int value)
{   
    if (node->data > value) {
        if (node->left == nullptr) {
            return node->left = new BinaryTreeNode(value);
        }
        else {
            insert(node->left, value);
        }
    }
    if (node->data < value) {
        if (node->right == nullptr) {
            return node->right = new BinaryTreeNode(value);            
        }
        else {
            insert(node->right, value);
        }
    }
}

bool BinaryTree::search(BinaryTreeNode* node, int value) const
{
    return false;
}

void BinaryTree::inOrder(BinaryTreeNode* node) const
{
    if (node == nullptr) {
        return; 
    }

    inOrder(node->left);
    cout << node->data << "->";
    inOrder(node->right);

}

BinaryTree::BinaryTree()
{
    root = nullptr; 
}

BinaryTree::~BinaryTree()
{
}

void BinaryTree::insert(int value)
{
    if (root == nullptr) {
        root = new BinaryTreeNode(value);
    }
    else {
        insert(root, value);
    }
}

void BinaryTree::display() const
{
    inOrder(root); 
    cout << "end" << endl; 
}
