#include <iostream>
#include<string.h>
using namespace std;

 
int main()
{ 
  string a;
  getline(cin,a);
  string b="abc";
  int flag=0;
  flag=a.find(b);
  cout<<flag;

}

/*  LEC I:
///////////////////////////////////////
cin  can't take the input with a space 
for that purpose use instead 
cin.getline(arr,siz)
or getline(cin.string)
////////////////////////////////////


* Functions: substr(i,j), erase(i,j), length(), replace(i,j,str2),empty()
* find(str2), push_back(char), pop_back(char), compare(str2)
    cout<<a.compare(b);
    cout<<a.length()<<endl;   
    If we input '      ' then also its length is returned as no of spaces and non-empty
    cout<<a.empty();
    cout<<endl<<a;
    cout<<a.substr(2,10); 
    cout<<a.erase(2,5);
    cout<<a.replace(7,6,b);
    cout<<"Length: "<<a.length();
    cout<<"Size: "<<sizeof(a)<<endl;
    a.push_back('A');
    cout<<a<<endl<<a.length()<<endl;
    a.pop_back();
    cout<<a<<endl<<a.length();



*Lower case to Upper case:
  int j=strlen(arr);
  for(int i=0;i<j;i++)
  { 
    if(arr[i]>='a' && arr[i]<='z')
    {
      arr[i]=int(arr[i])-int('a')+int('A');
    }
    else if(arr[i]==' ')
    {
      arr[i]='@';
    }
  }
  cout<<a;
*Convert to lowercase:
  while(i<strlen(name)
    {
      name[i]=name[i]+'a'-'A';
      i++;
    }

  String 
    // string na[1];
      // na[0]='a'; Garbage value returned 
  //  cout<<n<<endl;
    // cout<<na;


*Palindrome
  Return 0 or 1 if palindrome or not 
  compare name[i] with name[n-i-1]

*Reverse String:
 i=0;j=strlen(name)-1;
  while(i<j)
    {
      swap(name[i],name[j]); //Inbuilt function or swaps(name,i,j) - Declared Function
      i++;
      j--;
    }

  Char array and string (BASIC)
  int arr[10];
  ten blocks in the memory with each of int type data
  char arr[10]; ten blocks with each of char type 
  although in first case we can store 'a' as per its ascii value


    char ch[10];
   cin>>ch;
   cout<<"Aapka naam hai : "<<ch<<" Bsdk";
    ch [2]='a';
    ch[1]= 'b';
    ch[0]='c';
    cin>>ch;
    cout<<"Aapka naam hai : "<<ch;
    for( int i=0; i<10;i++)
    {
      cout<<i<<" Char is : "<<ch[i]<<endl;
    }
    
    int value =  (int)ch[5]; Here it prints its value 
    as 0 because of null pointer over there

    cout<<"Val : "<<value;
    cout<<"Enter the string: \n";
    cin>>ch;
    cout<<ch;
    cin.getline(ch,10);
    for(int i=0;i<10;i++)
    {
      cout<<ch[i];
    } 



    string hi;
    getline(cin,hi);
    cout<<hi.length();
    cout<<hi.empty();
    hi.push_back('A'); adds "A" to the last of hi
    cout<<hi;
    hi.pop_back();  //Remove the last character from the string
    cout<<hi;
    cout<<hi.substr(2,8); //Sub-string from pos 2 to 8 i.e index 2+1 to 8+1
    string ho="Hi how are yoa?";
    string hi="Hi how are you?";
    cout<<hi.compare(ho);   // Returns either 0 : Equal or <0: 1st smaller or >0: 2nd smaller
    string ha="area";
    cout<<hi.find(ha);  //Returns the index of the ha in hi;
    ho.replace(0,2,ha);
    cout<<ho;
    ho.erase(5,7);
    cout<<ho;
*/
