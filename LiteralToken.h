//LiteralToken.h
//Created by Terry Ulery, Kristen Tourek, Joe Cruz
//Lab 5


#ifndef LiteralTokenH
#define LiteralTokenH
#include "Literal.h"

template <class T>
class LiteralToken : public Literal<T>
{
private:
	T literal;
public:
	
	bool getLiteral(T &lit){
		lit = literal;
		return true;
		};
	bool setLiteral(const T &lit){
			literal = lit;
			return true;
		};
	std::string toString(){
		return "Incomplete Function";
	};
};



#endif
