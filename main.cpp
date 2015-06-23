//----- System includes -----//
#include <iostream>

//----- User includes -----//

#include "Cstyle.h"

namespace YYY{

}


using namespace std;
#include "Class.hpp"
int main()
{
	XXX::A a;
	a.setAA(1, 2, 3);

	someFuncAAAAA(1, 2, 3);

	using namespace XXX;

	Derivate* pD = new Derivate();

	printf("Field b = %d\n" , pD->GetB());

	delete pD;

	cout << "Hello, World!" << endl;
	return 0;
}