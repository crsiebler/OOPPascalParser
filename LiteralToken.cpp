//LiteralToken.cpp
//Created by Terry Ulery, Kristen Tourek, Joe Cruz
//Lab 5

#include "LiteralToken.h"

LiteralToken::LiteralToken()
{
	this.literal = NULL;
}

LiteralToken::~LiteralToken()
{
	delete this->literal;
}

bool LiteralToken::getLiteral(const T &lit)
{
	if (this.literal != NULL)
	{
		lit = this.literal;
		return true;
	}
	else
		return false;
}

bool LiteralToken::setLiteral(const T &lit)
{
	if (this.literal == NULL)
	{
		this->literal = lit;
		return true;
	}
	else //already defined
		return false;

}

string LiteralToken::toString()
{
	return "Incomplete";
}