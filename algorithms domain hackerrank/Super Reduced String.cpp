/*
ID:kirtima2
PROG:ride
lang:C++

*/

#include<iostream>
#include<map>
#include<string.h>
#include<vector>
#include<fstream>
#include<cstdlib>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    while(i<static_cast<int>(s.length()-1))
    {
        if(i>-1&& s[i]==s[i+1])
        {
            s.erase(i,2);
            i--;
        }
        else
            i++;
    }
    if(s.length()<=0)
    {
        cout<<"Empty String"<<endl;
    }else
    {
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i];
        }
    }return 0;

}
