#include<iostream>
using namespace std;
class a
{   public:
    void operator +(int b)
    {
        cout<<"Hello World";
    }
    void operator !()
    {
        cout<<"This is a unary operator so no need for 2 arguments to be passed";
    }
};
int main()
{
    a a1,a2;
    a1+4;
    !a2;
}