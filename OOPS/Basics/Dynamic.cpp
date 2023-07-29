#include<iostream>
using namespace std;
class flag
{   public:
    int cal;
};
int main()
{
    flag *suresh=new flag;
    (*suresh).cal=18;
    cout<<"cal of suresh is "<<(*suresh).cal<<endl;
    suresh->cal=19;         //WE can use -> to allocate memory 
    cout<<suresh->cal;


}