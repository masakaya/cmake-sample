#include "../SayClass/SayClass.h"

class DemoClass {
	public:
		DemoClass();
		~DemoClass();
		void print();
	private:
	    SayClass& say;	
};

