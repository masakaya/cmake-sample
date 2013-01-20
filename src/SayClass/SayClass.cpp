/**
 * @file SayClass.cpp
 * @brief 
 * @author Masashi Kayahara
 * @version 0.1
 * @date 2011-12-11
 */
#include "SayClass.h"
using namespace std;

/**
 * @brief Constractor
 */
SayClass::SayClass()
:mMessage("")
{
}

/**
 * @brief Destractor
 */
SayClass::~SayClass()
{
}

/**
 * @brief  Get Say Message
 */
string SayClass::getMessage() const
{
	return mMessage;	
}

/**
 * @brief 
 *
 * @Param :aMessage
 */
void SayClass::setMessage( const string aMessage)
{
	mMessage = aMessage;
}	
