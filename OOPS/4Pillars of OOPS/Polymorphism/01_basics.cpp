#include<iostream>
using namespace std;
class maths{
    public:
    int sum(int a,int b)
    {
        return a+b;
    }
    int sum(int a,int b,int c)  //Polymorphism  //Function overloading 
    {
        return a+b+c;
    }
    int sum(int a, float b)
    {
        return a+b;
    }

};
int main()
{   maths ma;
    cout << ma.sum(3,7)<<endl;
    cout<<ma.sum(32,98.8f);

}