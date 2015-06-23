#include <string>

namespace XXX {

	class A
	{
	public:

		void setAA(int a, char, double c);

		void setS(std::string &);


	private:
		int a;
		char b;
		double c;
		std::string s;
	};


	struct Base
	{
		Base()
				: b(191)
		{
		}

		virtual int GetB();

		int b;
	};

	struct Derivate : public Base
	{
		int GetB();
	};

}