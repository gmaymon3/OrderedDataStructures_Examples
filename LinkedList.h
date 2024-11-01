#pragma once
#include "Node.h"

class LinkedList 
{
    private:
        Node* head;  // Pointer to the first node in the list

    public:
        // Constructor and Destructor
        LinkedList();
        ~LinkedList();

        // Member functions
        void insertAtBeginning(int value);    // Adds a node at the beginning
        void append(int value);               // Adds a node with the given value at the end
        void display() const;                 // Displays all nodes in the list
};

