// Authors: Terry Ulery, Joe Cruz, Kristen Tourek

#ifndef __Lab4_IdentifierTree__
#define __Lab4_IdentifierTree__

#include "Token.h"

//----------------------//
// IdentifierTree Class //
//----------------------//
class IdentifierTree {
private:
public:
	Token *root;
	
	IdentifierTree();
	~IdentifierTree();
	void insertIdentifier(Token *parentNode, Token *identifier);
	void insertIdentifier(Token *identifier);
	void printTree(Token *node);
};

extern IdentifierTree* idTree;

#endif /* defined (__Lab4_IdentifierTree__) */
