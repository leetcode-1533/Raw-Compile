#include "complex.h"

void complex::show()
{
        cout<<real<<"+i*"<<com<<endl;
}

complex::complex(int a, int b)
{
        real=a;
        com=b;
}

complex complex::operator + (complex c1)
{
        complex c;
        c.real=c1.real+real;
        c.com=c1.com+com;
        return c;
}

complex complex :: operator - (complex c1)
{
        complex c;
        c1.real=-c1.real;
        c1.com=-c1.com;
        c=c1+(*this);
        return c;
}

complex complex :: operator * (complex c1)
{
        complex c;
        c.real = ((this->real)*c1.real)-((this->com)*c1.com);
        c.com = ((this->real)*c1.com)+((this->com)*c1.real);
        return c;
}

complex complex :: operator / (complex c1)
{
        complex a1;
        if(c1.real==0 && c1.com==0){
                cout<< " WRONG METHOD "<<endl;
                return a1;
        }
        else
        {
        a1.real = c1.real;
        a1.com = - c1.com;
        complex a2;
        a2 = a1 * c1;
        complex a3;
        a3= (*this) * a1;
        a3.real = a3.real / a2.real;
        a3.com = a3.com / a2.real;
        return a3;
        }
}
