// Edited by: Terry Ulery, Joe Cruz, Kristen Tourek
//
//  Print.h
//  Lab4
//
//  Created by Bryce Holton.
//

#ifndef __Lab4__Print__
#define __Lab4__Print__

#include <iostream>
#include "common.h"
#include "Token.h"
#include "IdentifierTree.h"

using namespace std;

class Print
{
private:
    string sourceFileName;
    string currentDate;
    int pageNumber;
    
    void printPageHeader();
    
public:
    Print(char source_name[], char date[]);
    ~Print();
    
    void printLine(char line[]);
    void printToken(Token *token);
	
	// Added Method to Print the Binary Tree of Tokens
	void printTree(IdentifierTree *tree);
};

#endif /* defined(__Lab4__Print__) */
