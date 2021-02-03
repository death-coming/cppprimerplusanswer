#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>

class complex
{
private:
    double a;
    double b;
public:
    complex();
    complex(double m, double n);
    complex operator+(const complex & c) const;
    complex operator-(const complex & c) const;
    complex operator*(const complex & c) const;
    complex operator*(double n) const;
    complex operator~() const;
    friend complex operator*(double n, const complex & c);
    friend std::ostream & operator<<(std::ostream & os, const complex & c);
    friend std::istream & operator>>(std::istream & is, complex & c);
};

#endif