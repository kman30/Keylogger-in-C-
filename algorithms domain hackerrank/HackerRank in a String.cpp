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
    int n;
    cin>>n;
    string *p;
    p=new string[n];
    string s="hackerrank";
    string s2;
    int i,c;
    for(int j=0;j<n;j++)
    {
        cin>>s2;
        i=0;
        c=0;
        while(i<s2.length())
        {
            if(s[c]==s2[i])
            {
                c++;
                i++;
            }
            else
                i++;
        }
        if(c==s.length())
        {
            p[j]="YES";
        }
        else
        {
            p[j]="NO";
        }

    }
    for (int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
}