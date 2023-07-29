#include<iostream>
using namespace std;
class animal{
    public:           //Perfect Encapsulation
    int age=86;
    int weight;
    // private:
    protected:
    void sleep()
    {
        cout<<"Sleeping"<<endl;
    }
    // Use getter and setter to access these data members
    private:        // It willl never get inherited //////
    int hello;
};

class dog:protected animal
{

void print()
{
   // this->hello=34;     //Here private doesnt gets inherited

}
};
int main()
{
    dog d1;
    //  cout<<d1.age;   age and sleep() was public but in dog class, they are protected thus can't be accessed outside
  //Thus, They are overall protected
  //  d1.sleep();   


}