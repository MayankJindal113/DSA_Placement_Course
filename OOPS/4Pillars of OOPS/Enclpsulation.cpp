#include<iostream>
using namespace std;
class animal{
    private:            //Perfect Encapsulation 
    // public:
    int age;
    int weight;
    void sleep()
    {
        cout<<"Sleeping"<<endl;
    }
    // Use getter and setter to access these data members
};
int main()
{
  
    animal aman,bahama;
    aman.weight=54;
    bahama.sleep();
    cout<<aman.weight;

}