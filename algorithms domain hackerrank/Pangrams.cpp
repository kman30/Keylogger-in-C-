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
    map<char,bool> m;
    for(int i=0;i<26;i++)
    {
        m['a'+i]=false;
    }
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i]))
        {
            m[s[i]]=true;
        }
        //else if(s[i]==' ')
        //{
         //   continue;
        //}

    }

    //for(auto i=m.begin();i!=m.end();i++)
    //{
    //    cout<<i->first<<" "<<i->second<<endl;
    //}
    map<char,bool>::iterator it;
    for( it=m.begin();it!=m.end();it++)
    {
        if(it->second==false)
        {
            //cout<<"not pangram";
            break;
        }
    }
    if(it==m.end()--)
    {
        cout<<"pangram";
    }
    else
    {
        cout<<"not pangram";
    }
}
