//LiteralToken.cpp
//Created by Terry Ulery, Kristen Tourek, Joe Cruz
//Lab 5

#include "LiteralToken.h"

template <class T>LiteralToken<T>::LiteralToken()
{
	literal = NULL;
}

template <class T>LiteralToken<T>::~LiteralToken()
{
	delete literal;
}

template <typename T> bool LiteralToken<T>::getLiteral(const T &lit)
{
	if (this.literal != NULL)
	{
		lit = this.literal;
		return true;
	}
	else
		return false;
}

template <typename T> bool LiteralToken<T>::setLiteral(const T &lit)
{
	if (this.literal == NULL)
	{
		this->literal = lit;
		return true;
	}
	else //already defined
		return false;

}

template <typename T> std::string LiteralToken<T>::toString()
{
	return "Incomplete";
}
