// Authors: Terry Ulery, Joe Cruz, Kristen Tourek

#include "LineNode.h"

//--------------------//
// Constructor Method //
//--------------------//
LineNode::LineNode(int lineNumber) {
	// Initialize the Line Number to the Node
	this->line = lineNumber;
	
	// Initialize the next pointer to NULL (Signifying the end of the List)
	this->next = NULL;
}

//-------------------//
// Destructor Method //
//-------------------//
LineNode::~LineNode() {
	// Free the Pointer to the next node in the Linked List
	delete this->next;
}
