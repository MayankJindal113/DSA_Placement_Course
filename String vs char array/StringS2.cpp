#include<iostream>
#include<string.h>
using namespace std;

int findd(string s,string part)
{
    
}
    
int main()
{
    // string s="abcdefghi";
    // string part="cd";
    // cout<<findd(s,part); // "Expected to return the index where part is found in s"
  
}
/*
// #include <climits>  int i=INT_MAX;cout<<i;
Leetcode 539:
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) 
    {
        vector<int>minutes;
        for(int i=0;i<timePoints.size();i++)
        {
            string curr = timePoints[i];
            int hours= stoi (curr.substr(0,2));
            int min=stoi(curr.substr(3,2));
            int totalmin=hours*60+min;
            minutes.push_back(totalmin);
        }
        sort(minutes.begin(),minutes.end());
        int mini=INT_MAX;
        int n=minutes.size();
        int j=0;
        while(j<n-1)
        {
            int diff= minutes[j+1]-minutes[j];
            mini=min(diff,mini);
            j++;
        }
        int lastdiff1=minutes[0]+1440-minutes[n-1];
        int lastdiff2=minutes[n-1]-minutes[0];
       int last= min(lastdiff1,lastdiff2);
       return min(last,mini);
    }
};
Leetcode 680 :
Final Correct Solution:
class Solution {
public:
    bool validPalindrome(string s)
    { 
        int i=0;bool flag1=true;bool flag2=true;
        int j=s.length()-1;
        int a=0;int b=0;
        while(i<j)
        {
            if(s[i]!=s[j])
            
            {//First case :
            a=i;b=j;
                while(i<j)
                {
                    if(s[i+1]!=s[j])
                    {
                        flag1=false;
                        // goto end;
                    }i++;j--;
                }
                while(a<b)
                {
                    if(s[a]!=s[b-1])
                    {
                        flag2=false;
                        // goto end;
                    }a++;b--;
                }
            }
            else
            {
                i++;
                j--;
            }
        }
        if(flag1==true||flag2==true)
        {
            return true;
        }
        else{
            return false;
        }
    }
    };
*/

 /*   
    II)Remove the occurance of a substr in another string:
        string removeOccurrences(string s, string part)
        {
            int pos=s.find(part);
            while(pos!= string::npos)
            {
                s.erase(pos,part.length());
                pos=s.find(part);
            }
            return s;    
        }


    I)string removeDuplicates(string s)
    {
        int i = 0;
        while (i < s.length() - 1)
        {
            if (s[i] == s[i + 1])
            {
                s.erase(i, 2);
                if (i > 0)
                {
                    i--;
                }
            }
            else
            {
                i++;
            }

            if (s.empty())
            {
                break;
            }
        }
        return s;
    }
    ----    OR    ----

    string removeDuplicates(string s) 
    {
        string answer="";
        int j=s.length();
        int i=0;
        int q=0;
        while(i<j)
        { 
            q=answer.length();
            if(q>0)
            {
                if(answer[q-1]!=s[i])
                {
                    answer.push_back(s[i]);
                }
                else if(answer[q-1]==s[i])
                {
                    answer.pop_back();
                }
            }
            else
            {
            answer.push_back(s[i]);
            }
        i++;
        }
        return answer;
    }

*/