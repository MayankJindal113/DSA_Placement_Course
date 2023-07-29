

#include<iostream>
#include<vector>
using namespace std;




int main()
{
    
    int arr[4]={0,1,2,3};
    cout<<endl;
    
}




/*

1. Factorial using for loop:

    int ans=1;
    for(int i=1;i<=n;i++)
    {   
        ans=ans*i;
    }
    cout<<ans;
-----------------------------------------------------------------------------

VECTORS:
Ques 75 Leetcode - Sort Colors:(Try using in-space concept- cant use extra memory in any terms)

void displ(vector<int> v)
{
    int i=0;
    while (i<v.size())
    {
        cout<<v[i]<<" ";
        i++;
    }
    
}
vector<int>vec1;
vector<int>nums={2,0,2,1,1,0};
    int i=0,n=5;
    int j;
    while (i<n)
    {   cout<<"Enter the elements : ";
        cin>>j;
        vec1.push_back(j);
        i++;
    }
    cout<<endl;
    displ(vec1);
    vec1.pop_back();
    displ(vec1);    

---------------------------------------------------------------------------------------------------
POINTERS:
  
    int * aaa;
    cout<<*aaa;// Bad Practice so should declare nullptr always
    int * ppt=nullptr;
    cout<<*ppt;


    cout<<sizeof(chh)<<endl;
    cout<<sizeof(v);
    cout<<sizeof(p);
    The size of a pointer is regardless of the type of data it points to as its storing 


    cout<<(*ptr)++<<endl;
    cout<<a<<endl;
    cout<<ptr++<<endl;
    cout<<ptr<<endl;


    int a=10;
    int * ptr=&a;
    (*ptr)=(*ptr)*2;
    cout<<a;
    
    int a=10;
    int * ptr=&a;
    int *dusraptr=ptr;
    (*dusraptr)++;
    cout<<a;

    -------- -------- -------- -------- --------
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

*/