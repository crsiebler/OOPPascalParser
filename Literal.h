//Literal.h
//Created by Terry Ulery, Kristen Tourek, Joe Cruz
//Lab 5


#ifndef Lab5LiteralH
#define Lab5LiteralH
#include "common.h"


template <typename T>
class Literal //: public Token
{
private:


public:

	virtual bool getLiteral(const T &lit) = 0;
	virtual bool setLiteral(const T &lit) = 0;
	virtual std::string toString() = 0;
	
};


#endif
