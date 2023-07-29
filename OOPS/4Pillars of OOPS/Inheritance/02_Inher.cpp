// SIngle level inheritance::::


#include<iostream>
using namespace std;
class car
{   public:
    string name;
    int model,age;
    void speedUp()
    {
        cout<<"Speeding Up "<<endl;

    }
    void breakMarro()
    {
        cout<<"Apply Break ";

    }


};
class Scorpio:public car                ///We can now say Scorpio is a car .
{       




};
int main()
{
    Scorpio mayankki;
    mayankki.breakMarro();
}