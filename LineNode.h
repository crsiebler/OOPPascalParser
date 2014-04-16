// Authors: Terry Ulery, Joe Cruz, Kristen Tourek

#ifndef __Lab4_LineNode__
#define __Lab4_LineNode__

#include "common.h"
//----------------//
// LineNode Class //
//----------------//
class LineNode {
private:
public:
	int line;
	LineNode *next = NULL;
	
	LineNode(int lineNumber);
	~LineNode();
};

#endif /* defined (__Lab4_LineNode__) */
