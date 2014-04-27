//Identifier.cpp
//Created by Terry Ulery, Kristen Tourek, Joe Cruz
//Lab 5


Identifier::Identifier()
{
	// Initialize the Linked List of Line Occurrences
	this->lines = new LineList();
    this->leftChild = NULL;
    this->rightChild = NULL;
}


Identifier::~Identifier()
{
	delete this->lines;
}