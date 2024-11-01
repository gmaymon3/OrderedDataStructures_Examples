// OrderedDataStructures_Examples.cpp : This file contains the 'main' function.
// This solution will contain linked lists and binary trees. 

#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include <vector>  // Include the vector library

using namespace std;


int main()
{
    // Linked List
    // Create a list node. 
    Node n(2);
    cout << n.data << endl;   // value
    cout << n.next << endl;   // nullptr

    // Make a node on heap and delete it 
    Node* heapNode = new Node(2); 
    delete heapNode; 

    // Create a list
    LinkedList list; 
    list.insertAtBeginning(2); 
    list.append(4); 
    list.display(); 
}

