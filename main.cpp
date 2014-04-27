// Edited by: Terry Ulery, Joe Cruz, Kristen Tourek
//
//  main.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include <iostream>
#include "common.h"
#include "Print.h"
#include "Scanner.h"
#include "Token.h"
#include "LiteralToken.h"


int main(int argc, const char * argv[])
{
    LiteralToken tok1 = new LiteralToken();
    LiteralToken tok2 = new LiteralToken();
    LiteralToken tok3 = new LiteralToken();
    tok1.setLiteral("String");
    tok2.setLiteral(33.2);
    tok3.setLiteral(6);
    return 0;
}

