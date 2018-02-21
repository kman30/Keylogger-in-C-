/*
ID:kirtima2
PROG:ride
LANG:C++

*/

#include<iostream>
#include<map>
#include<string.h>
#include<vector>
#include<fstream>
#include<cstdlib>
#define ll long long
using namespace std;
map<char,int> m1;
void initialize()
{
    //map<char,int> m1;
    for(int i=1;i<=26;i++)
    {
        m1['A'+i-1]=i;
    }
}
ll modulo(int a)
{
    return a%47;
}
int main()
{
    initialize();
    char a[8];
    char comet[8];
    ll product1=1;
    ll product2=1;
    ofstream fout("ride.out");
    ifstream fin("ride.in");
    fin>>a;
    fin>>comet;
    for(int i=0;i<strlen(a);i++)
    {
        a[i]=toupper(a[i]);
    }
    for(int i=0;i<strlen(comet);i++)
    {
        comet[i]=toupper(comet[i]);
    }
    for(int i=0;i<strlen(a);i++)
    {
        product1*=m1[a[i]];
    }
    for(int i=0;i<strlen(comet);i++)
    {
        product2*=m1[comet[i]];
    }
    int mod1=modulo(product1);
    int mod2=modulo(product2);
    if(mod1==mod2)
    {
        fout<<"GO"<<endl;
    }
    else
        fout<<"STAY"<<endl;
    return 0;

}

