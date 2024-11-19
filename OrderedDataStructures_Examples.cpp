// OrderedDataStructures_Examples.cpp : This file contains the 'main' function.
// This solution will contain linked lists and binary trees. 

#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include "BinaryTreeNode.h"
#include "BinaryTree.h"
#include "MyVector.h"

#include <chrono>
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

    // *** Two Sum Hash list example
    MyVector vec1; 
    vector<int> vec = { 203, 363, 900, 48, 520, 951, 58, 774, 813, 679, 268, 213, 135, 872, 793, 434, 839, 631, 125, 897, 830, 646, 995, 493, 395, 842, 69, 121, 214, 374, 990, 203, 778, 265, 205, 208, 930, 982, 252, 861, 290, 131, 127, 156, 168, 129, 364, 799, 504, 350, 703, 449, 547, 878, 744, 649, 145, 432, 95, 554, 945, 849, 459, 436, 72, 560, 415, 524, 896, 91, 252, 154, 707, 486, 355, 517, 117, 122, 115, 377, 102, 748, 212, 594, 874, 948, 377, 932, 826, 745, 713, 132, 724, 542, 319, 917, 212, 792, 195, 419, 254, 416, 684, 808, 177, 908, 288,35,70 };
    int target = 105;

    // Run Slow Brute Force Example w/ O(n^2) time 
    auto start = std::chrono::high_resolution_clock::now();
    vector<int> vecOut = vec1.twoSumSlow(vec, target);     // Run Brute Force
    auto end = std::chrono::high_resolution_clock::now();     // Record time to compute brute force
    cout << "Index 1: " << vecOut[0] << " Index 2: " << vecOut[1] << endl;
    std::chrono::duration<double> duration = end - start;
    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    // Run Faster Hash Table Example w/ O(n) time 
    auto start_hash = std::chrono::high_resolution_clock::now();
    vector<int> vecOut2 = vec1.twoSum(vec, target);
    auto end_hash = std::chrono::high_resolution_clock::now();     // Record time to compute hash table implementation
    cout << "Index 1: " << vecOut2[0] << " Index 2: " << vecOut2[1] << endl;
    std::chrono::duration<double> duration_hash = end_hash - start_hash;
    std::cout << "Time taken: " << duration_hash.count() << " seconds" << std::endl;


}

