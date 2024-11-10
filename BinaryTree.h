#pragma once
#include <iostream>
#include "BinaryTreeNode.h"

class BinaryTree
{
private:
    BinaryTreeNode* root;

    // Helper functions for recursion
    BinaryTreeNode* insert(BinaryTreeNode* node, int value);
    bool search(BinaryTreeNode* node, int value) const;
    void inOrder(BinaryTreeNode* node) const;

public:
    // Constructor and Destructor
    BinaryTree();
    ~BinaryTree();

    // Public member functions
    void insert(int value);
    void display() const;
};

