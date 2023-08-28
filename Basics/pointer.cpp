#include<iostream>
using namespace std;

int main()
{
 // char c[5] = "have";
    // int a=1;
    // char * ch=nullptr;
    // cout<<"& of c[0] should print the address but it prints the value at address: "<<&c[0]<<endl;
    // cout<<"While it works fine for int type of data :"<<&a;
    // cout<<c;
        
          int * ppt=nullptr;
    cout<<*ppt<<"This is the value of the null pointer";
}




/*
POINTERS:
  
    int * aaa;
    cout<<*aaa;// Bad Practice so should declare nullptr always
    int * ppt=nullptr;
    cout<<*ppt;


    cout<<sizeof(chh)<<endl;  // chh is int 
    cout<<sizeof(v);    // v is float
    cout<<sizeof(p);    // p is bool
    The size of a pointer is regardless of the type of data it points to as its storing 


    cout<<(*ptr)++<<endl;
    cout<<a<<endl;
    cout<<ptr++<<endl;
    cout<<ptr<<endl;


    float fl[2] = {1.211, 1542};
    cout << fl << endl;
    cout << fl[0];

    int a=10;
    int * ptr=&a;
    (*ptr)=(*ptr)*2;
    cout<<a;
    
    int a=10;
    int * ptr=&a;
    int *dusraptr=ptr;
    (*dusraptr)++;
    cout<<a;

    -------- -------- -------- -------- 
    Arrays as pointer :
    int arr[4]={0,1,2,3};
    cout<<arr;cout<<endl;
    cout<<&arr[0];cout<<endl;
    cout<<&arr;cout<<endl;
    All the above are the same i.e base address


    cout<<arr[0];cout<<endl;
    cout<<arr;cout<<endl;
    cout<<&arr[0];cout<<endl;
    cout<<&arr;cout<<endl;
    cout<<*arr;cout<<endl;
    cout<<*(arr+3);
    cout<<arr[3];
    cout<<2[arr];
    // arr[i]=i[arr]=*(i+arr);


    cout<<ch<<endl;   //Ideally it should print the base-address of char array but it prints the whole char
    //  its reason is that the implementation of cout is different for char and int datatypes..
    cout<<&ch<<endl;
    cout<<*ch<<endl;
    cout<<c;
    cout<<&c<<endl;
    cout<<*(&ch)<<endl;
    cout<<*(c+3);
    cout<<endl<<*(ch+2);
    cout<<endl;
    printf(ch);
    cout<<endl;
    cout<<"& representation";
*/