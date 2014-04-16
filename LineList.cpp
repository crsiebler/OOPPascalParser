// Authors: Terry Ulery, Joe Cruz, Kristen Tourek

#include "LineList.h"

//--------------------//
// Constructor Method //
//--------------------//
LineList::LineList() {
	// Initialize the head of the Linked List to NULL (Signifying Empty List)
	this->first = NULL;
}

//-------------------//
// Destructor Method //
//-------------------//
LineList::~LineList() {
	// Declare the pointers to the nodes
	LineNode *node, *next;

	// Grab the first node in the Linked List
	node = this->first;
	
	// Loop through the Linked List
	while (node != NULL) {
		// Grab the next node in the Linked List
		next = node->next;
		
		// Delete the current node
		delete node;
		
		// Move to the next node
		node = next;
	}
	
	// Delete the temporary pointer
	delete next;
	
	// Initialize the head of the Linked List to NULL (Signifying Empty List)
	this->first = NULL;
}

//-----------------------//
// insertLineNode Method //
//-----------------------//
void LineList::insertLineNode(int lineNumber) {
	// Create a new LineNode to put into Linked List
	LineNode *node = new LineNode(lineNumber);
	
	// Grab the first node in the Linked List
	LineNode *temp = this->first;
	
	// Check if the Linked List is empty
	if (temp != NULL) {
		// Loop to the end of the Linked List
		while (temp->next != NULL) {
			// Move the pointer to the next node in the Linked List
			temp = temp->next;
		}
		
		// Add the node to the end of the Linked List
		temp->next = node;
	} else {
		// Linked List is empty so initialize the first node to the new node
		this->first = node;
	}
	
	return;
}

//------------------//
// printList Method //
//------------------//
void LineList::printList() {
	// Initialize a Pointer to the 1st Node in the Linked List
	LineNode *node = this->first;
	
	// Loop through the Linked List
	while (node != NULL) {
		// Print the Identifier's Line Number
		printf("%i ", node->line);
		node = node->next;
	}
	
	// Print a new line after Linked List of Line Numbers
	printf("\n");
	
	return;
}
