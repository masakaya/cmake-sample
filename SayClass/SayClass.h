#ifndef SAY_CLASS_H
#define SAY_CLASS_H

#include <string>
using namespace std;

class SayClass {
	public:
		//! Constractor
		SayClass();

		//! Destractor
		~SayClass();
		
		/**
		 * @brief  Get Say Message
		 */
		string getMessage() const;

		/**
		 * @brief Set Say Message
		 *
		 * @Param :aMessage
		 */
		void setMessage( const string aMessage );

	private:
		//! Message
		string mMessage;

		//! Disable Copy Constractor
		SayClass(const SayClass& aObj );
		void operator =(const SayClass& aObj );
};

#endif // SAY_CLASS_H
