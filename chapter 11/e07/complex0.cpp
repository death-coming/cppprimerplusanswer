// exercise 07

#include <iostream>
#include "complex0.h"

using namespace std;

complex::complex()
{
    a = 0;
    b = 0;
}
complex::complex(double m, double n)
{
    a = m;
    b = n;
}
complex complex::operator+(const complex & c) const
{
    return complex(a + c.a, b + c.b);
}
complex complex::operator-(const complex & c) const
{
    return complex(a - c.a, b - c.b);
}
complex complex::operator*(const complex & c) const
{
    return complex(a * c.a - b * c.b, a * c.b + b * c.a);
}
complex complex::operator*(double n) const
{
    return complex(a * n, b * n);
}
complex complex::operator~() const
{
    return complex(a, -b);
}
complex operator*(double n, const complex & c)
{
    return c * n;
}
std::ostream & operator<<(std::ostream & os, const complex & c)
{
    os << "(" << c.a << ", " << c.b << "i)";
    return os;
}

std::istream & operator>>(std::istream & is, complex & c)
{
    cout << "real: ";
    is >> c.a;
    if (!is)
        return is;
    cout << "imaginary: ";
    is >> c.b;
    return is;   
}