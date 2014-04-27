// Authors: Terry Ulery, Joe Cruz, Kristen Tourek

#ifndef __Lab4_IdentifierTree__
#define __Lab4_IdentifierTree__

#include "Token.h"
#include "Identifier.h"

//----------------------//
// IdentifierTree Class //
//----------------------//
class IdentifierTree {
private:
public:
	Identifier *root;
	
	IdentifierTree();
	~IdentifierTree();
	void insertIdentifier(Identifier *parentNode, Identifier *identifier);
	void insertIdentifier(Identifier *identifier);
	void printTree(Identifier *node);
};

extern IdentifierTree* idTree;

#endif /* defined (__Lab4_IdentifierTree__) */
