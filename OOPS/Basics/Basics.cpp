#include<iostream>
using namespace std;
class animal
{   
    int weight;
    public:
    int setweight(int weight)
     {
        // weight= weight;
        this->weight=weight;
     }

     int getweight()
     {
        return weight;
     }   
    /*
    int age;
     string name;
     void eat()
     {
        cout<<"Eating"<<endl;
     }
     void sleep()
     {
        cout<<"Sleeping"<<endl;
     }
     */ 
            
};

int main()
{
    animal ramesh;
    ramesh.setweight(45);
    ramesh.getweight<<endl;
    
    
    // cout<<"The sizeof  class is "<<sizeof(animal)<<endl;
    // dynamic and static memory allocation
    //Static
    




   /*ramesh.age=24;
    ramesh.name="Lion";
    cout<<"Age of ramesh is :"<<ramesh.age<<endl;
    cout<<"Name of ramesh is :"<<ramesh.name;
    ramesh.eat();
    ramesh.sleep();
*/

    
}
class car{};