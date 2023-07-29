#include<iostream>
using namespace std;
class animal
{
    public:
    virtual void speak()            // We may just be declaring this fuction and not definig it 
                            // And its definition is done in the child classes only
    {
        cout<<"Speaking";
    }
};
class dog:public animal
{
    public:
    void speak()        //Overriding the speak()
    {
        cout<<"Barking";
    }
};

class cat: public dog
{
    public:
    void speak()
    {
        cout<<"Meow";
    }
};
int main()
{
    // dog d1;
    // d1.speak();
    // cat c1;
    // c1.speak();

    animal * a1 = new animal;
    a1-> speak();
    dog *dd=new dog;
    dd-> speak();


/// This is an example of upcasting
    animal * asd= new dog ;         ///Object of dog while pointer of animal
    asd-> speak();
        // Down casting
            // dog * jjj= new animal;
            // jjj-> speak();   
}