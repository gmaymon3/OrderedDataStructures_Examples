// OrderedDataStructures_Examples.cpp : This file contains the 'main' function.
// This solution will contain linked lists and binary trees. 

#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include "BinaryTreeNode.h"
#include "BinaryTree.h"

#include <vector>  // Include the vector library

using namespace std;


int main()
{
    // ***** SINGLY LINKED LIST *****
    // Linked List
    // Create a list node. 
    Node n(2);
    cout << "The expected node data is 2 - verify: " << n.data << endl;   // value
    cout << "The expected pointer is null - verify: " << n.next << endl;   // nullptr

    // Make a node on heap and delete it 
    Node* heapNode = new Node(2); 
    delete heapNode; 

    // Create a list
    LinkedList list; 
    list.insertAtBeginning(2); 
    list.append(4); 
    cout << "The singly linked list is shown below." << endl; 
    list.display(); 



    // ***** BINARY TREE *****
    BinaryTreeNode* b_node = new BinaryTreeNode(7);
    cout << "The expected binary tree node data is 7 - verify: " << b_node->data << endl;   // value

    BinaryTree b_tree; 
    b_tree.insert(2); 
    b_tree.insert(8);
    b_tree.insert(6); 
    cout << "The binary tree is shown below." << endl;
    b_tree.display(); 

}

