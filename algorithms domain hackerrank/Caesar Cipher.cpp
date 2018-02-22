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
    char *p;
    p=new char[n+1];
    cin>>p;
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(isalpha(p[i]))
        {
            if(islower(p[i]))
            {
                cout<<(char)(97+((char)(p[i])+key-97)%26);
            }
            else if(isupper(p[i]))
            {
                cout<<(char)(65+((char)(p[i])+key-65)%26);
            }
            //else
            //{
              //  cout<<p[i];
            //}
        }
        else
        {
            cout<<p[i];
        }
    }
    return 0;
}
