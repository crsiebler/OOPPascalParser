//LiteralToken.h
//Created by Terry Ulery, Kristen Tourek, Joe Cruz
//Lab 5


#ifndef LiteralTokenH
#define LiteralTokenH
#include "Literal.h"
#include <sstream>

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
	std::string toString()
	{
		std::ostringstream ss;
		ss << literal;
		std::string newStr = ss.str();
		return ss.str();
	};
};



#endif