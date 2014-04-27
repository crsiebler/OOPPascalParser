//Identifier.h
//Created by Terry Ulery, Kristen Tourek, Joe Cruz
//Lab 5


#ifndef lab5_Identifier
#define lab5_Identifier

#include "common.h"
#include "Token.h"
#include "LineList.h"


class Identifier: public Token
{
	//define class here
private:


public:
	Identifier();
	~Identifier();
	// Declare a variable to store the list of Line Numbers
	LineList *lines;
	
	// Declare the Children for the Binary Tree
	Identifier *leftChild;
	Identifier *rightChild;

};


#endif