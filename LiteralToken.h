//LiteralToken.h
//Created by Terry Ulery, Kristen Tourek, Joe Cruz
//Lab 5


#ifndef LiteralTokenH
#define LiteralTokenH
#include "Literal.h"

template <class T>
class LiteralToken : public Literal <T>
{
private:
	T literal;
public:
	LiteralToken();
	~LiteralToken();
	bool getLiteral(const T &lit);
	bool setLiteral(const T &lit);
	string toString();
};



#endif