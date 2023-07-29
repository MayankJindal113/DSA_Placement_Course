#include<iostream>
using namespace std;

class papa
{
    public:
    string color="Green";
    string hair ="Blue";
    void change()
    {
        this->color="orange";              
    }
    void change(int r)          //Function Overloading 
    {
        this->color="black";
    }
    

};
class mom
{

    public:
    int weight=47;
    int lakk=28;

};

class beta: public papa ,public mom
{  

    public:       
    void modify()
    {
        this->weight=98;        
    }
    //There exists a copy of each inherited fuction and variable in the child class

    // this->color="Red";   
    // This is not allowed as we can only define and intialise var and functions in a class

};
int main()
{
    
    beta ram;
    papa ramesh;
    cout << "The color is "<< ram.color<<endl;
    ram.change(45);
    cout << ram.color << endl;
    cout << ramesh.color<<endl;  
    ramesh.change(3);
    cout << ram.color << endl;
    cout << ramesh.color<<endl;  
    //copy of color var exits not the exact 
    cout<< "Lakk: " << ram.lakk<< " Kudi da "<< ram.weight<< " kudi da";    

}