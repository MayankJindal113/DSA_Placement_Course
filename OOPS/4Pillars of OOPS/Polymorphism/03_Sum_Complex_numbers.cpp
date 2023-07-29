//  Sum of two complex numbers using operator
//  Mission:
//  c1+c2 gives the c3 the addition of these complex numbers 
#include<iostream>
using namespace std;
class complex
{   public:
    int real,img;
    int operator + (complex & obj)
    {
        int freal=this->real+obj.real;
        int fimg= this->img+obj.img;
        cout<<"The addition of the complex numbers c1 and c2 is :";
        cout<<freal<<" + "<<fimg<<"i";
    }
};
int main()
{   
    complex c1,c2;
    c1.img=23;
    c1.real=51;
    c2.img=12;
    c2.real=8;
    c1+c2;

}