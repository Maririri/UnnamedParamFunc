#include "Class.hpp"

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