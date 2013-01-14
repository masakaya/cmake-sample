#include <stdio.h>
#include "DemoClass.h"

using namespace std;
DemoClass::DemoClass()
:say( *(new SayClass()) )
{
}

DemoClass::~DemoClass()
{
	delete &say;	
}
void DemoClass::print()
{
	say.setMessage("Hello Test.555\n");
	printf("DemoMessage %s\n", say.getMessage().c_str() );
}
