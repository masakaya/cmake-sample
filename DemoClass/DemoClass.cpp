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
	say.setMessage("Hello World.");
	printf("DemoMessage %s\n", say.getMessage().c_str() );
}