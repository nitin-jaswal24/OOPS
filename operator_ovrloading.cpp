#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;
public:
    complex(int real=0,int imag=0)
    {

        this->real=real;
        this->imag=imag;
    }
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

friend ostream & operator <<(ostream &out, complex &c);


};
ostream & operator <<(ostream &out, complex &c)
{
    out<<c.real<<"+"<<c.imag<<"i"<<endl;

}
int main()
{complex c(2,3);
complex c1(4,4);
complex temp=c+c1;
cout<<temp<<endl;

}




















