// Authors: Terry Ulery, Joe Cruz, Kristen Tourek

#include "IdentifierTree.h"

//--------------------//
// Constructor Method //
//--------------------//
IdentifierTree::IdentifierTree() {
	// Initialize the Root Node to NULL (Signifying an Empty Binary Tree)
	this->root = NULL;
}

//-------------------//
// Destructor Method //
//-------------------//
IdentifierTree::~IdentifierTree() {
	// Delete the Binary Tree Children (Should recursively delete the objects lower in the tree)
	delete this->root->leftChild;
	delete this->root->rightChild;
	delete this->root;
	
	// Initialize the Root Node to NULL (Signifying an Empty Binary Tree)
	this->root = NULL;
}

//-------------------------//
// insertIdentifier Method //
//-------------------------//
void IdentifierTree::insertIdentifier(Identifier *parentNode, Identifier *identifier) {
	if (strcmp(identifier->getTokenString().c_str(),parentNode->getTokenString().c_str()) == 0) {
		// Identifier is the same as the parent
		// Insert the Line Number into the List List for the matching Token
		parentNode->lines->insertLineNode(identifier->lines->first->line);
	} else if (identifier->getTokenString() < parentNode->getTokenString()) {
		// Identifier is lower than the Root
		if (parentNode->leftChild == NULL) //no left child
			parentNode->leftChild = identifier;
		else // left child exists
			insertIdentifier(parentNode->leftChild, identifier);
	} else if (identifier->getTokenString() > parentNode->getTokenString()) {
		// Identifier is higher than the Root
		if (parentNode->rightChild == NULL) // no right child
			parentNode->rightChild = identifier;
		else // right child exists
		insertIdentifier(parentNode->rightChild, identifier);
	}
	
	return;
}


void IdentifierTree::insertIdentifier(Identifier *identifier)
{
	if(this->root == NULL)
		this->root = identifier;
	else
		insertIdentifier(this->root, identifier);
}

void IdentifierTree::printTree(Identifier *node) {
	// Check if the Token Node is NULL
	if (node != NULL) {
		// If Token is set then do Pre-Order Traversal on Binary Tree
		
		// Print the Left Descendants
		printTree(node->leftChild);
		
		// Print the Root Node
		string nodeStr = node->getTokenString();
		printf("%-16s\t", nodeStr.c_str());
		node->lines->printList();
		
		// Print the Right Descendants
		printTree(node->rightChild);
	}
	
	return;
}
