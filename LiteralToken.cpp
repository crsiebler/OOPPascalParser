//LiteralToken.cpp
//Created by Terry Ulery, Kristen Tourek, Joe Cruz
//Lab 5

#include "LiteralToken.h"

template <typename T>LiteralToken<T>::LiteralToken()
{
	this.literal = NULL;
}

template <typename T>LiteralToken<T>::~LiteralToken()
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