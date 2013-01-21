#include <stdio.h>
#include "DemoClass.h"

using namespace std;
DemoClass::DemoClass()
:say( *(new SayClass()) )
{
}

DemoClass::~DemoClass()
{
//	delete &say;	
}
void DemoClass::print()
{
	say.setMessage("Hello Test.bbbb\n");
	printf("DemoMessage %s\n", say.getMessage().c_str() );
}

void DemoClass::print2()
{
	say.setMessage("Hello Test.bbbb\n");
	printf("DemoMessage %s\n", say.getMessage().c_str() );
}

/**
 * @brief invaildStyle 
 * @param :aTest
 */
void DemoClass::invaildStyle( int aTest)
{
}


