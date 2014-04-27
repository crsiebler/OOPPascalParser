// Edited by: Terry Ulery, Joe Cruz, Kristen Tourek
//
//  main.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include <iostream>
#include "common.h"
#include "LiteralToken.h"


int main(int argc, const char * argv[])
{
    LiteralToken<string> tok1;
    LiteralToken<float> tok2;
    LiteralToken<int> tok3;
    tok1.setLiteral("String");
    tok2.setLiteral(33.2);
    tok3.setLiteral(6);
    return 0;
}

