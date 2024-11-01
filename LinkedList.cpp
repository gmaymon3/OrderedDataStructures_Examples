#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
	head = nullptr; 
}

LinkedList::~LinkedList()
{
	Node* current = head;
	while (current != nullptr) {
		Node* nextNode = current->next;
		delete current;
		current = nextNode;
	}
}

void LinkedList::insertAtBeginning(int value)
{

	Node* newNode = new Node(value); // Create a new node on heap memory

	//newNode->next = head; sets the next pointer of newNode to point to the current head node of the list.
	//This step effectively links the new node to the current start of the list.
	//If the list was empty(i.e., head was nullptr), then newNode->next will simply be nullptr, making newNode the only node in the list

	newNode->next = head;            // Set the new nodes next to head. Head is the pointer to the first node in the list
	head = newNode;                  // Set head to the pointer to new node. 

}

void LinkedList::append(int value)
{
	Node* newNode = new Node(value); // Create a new node on heap memory
	if (head == nullptr) {
		newNode = head; 
	}
	else {
		Node* current = head;
		while (current->next != nullptr)
		{
			current = current->next;
		}
		current->next = newNode;
	}
}

void LinkedList::display() const
{
	Node* current = head; //  temporary pointer named current that starts at the head of the list 
	while (current != nullptr) {
		cout << current->data << "->"; // print the nodes data
		current = current->next; // advance to the next node 
	}
	cout << "nullptr" << endl;
}
