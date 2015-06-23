#include "Class.hpp"

namespace XXX{


void A::setAA(int a, char b, double c)
{
    A::a = a;
    A::b = 0;
    A::c = c;
}

void A::setS(std::string &s)
{
    A::s = s;
}

int Derivate::GetB() { return b;}

int Base::GetB()
{
    return 0;
}

}
