#include "../SayClass/SayClass.h"

class DemoClass {
	public:
		DemoClass();
		~DemoClass();
		void print();
		void print2();
        void invaildStyle( int aTest);
	private:
	    SayClass& say;	
};

