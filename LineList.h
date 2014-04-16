// Authors: Terry Ulery, Joe Cruz, Kristen Tourek

#ifndef __Lab4_LineList__
#define __Lab4_LineList__

#include "LineNode.h"

//----------------//
// LineList Class //
//----------------//
class LineList {
private:
public:
	LineNode *first;
	
	LineList();
	~LineList();
	
	void insertLineNode(int lineNumber);
	void printList();
};

#endif /* defined (__Lab4_LineList__) */
