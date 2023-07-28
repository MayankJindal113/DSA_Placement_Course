

#include<iostream>
#include<vector>
using namespace std;

void displ(vector<int> v)
{
    int i=0;
    while (i<v.size())
    {
        cout<<v[i]<<" ";
        i++;
    }
    
}



int main()
{
    //Week 3 : Sort Color Question 75 leetcode
    // In-place: means we can't use extra memory in any terms //
    

    vector<int>nums={2,0,2,1,1,0};
    


}




/*
1. Factorial using for loop:

    int ans=1;
    for(int i=1;i<=n;i++)
    {   
        ans=ans*i;
    }
    cout<<ans;


VECTORS:
vector<int>vec1;
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
*/