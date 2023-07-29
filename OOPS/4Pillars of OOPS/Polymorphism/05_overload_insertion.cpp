// WAP such that
// if we write cout<<object1 , it prints all the attributes of object1
#include<iostream>
using namespace std;
class a
{   public:
int prop=22;
    void operator <<(a &obj)
    {
        cout<<obj.prop;
    }
};
int main()
{
    a a1;

    cout<<a1;

}