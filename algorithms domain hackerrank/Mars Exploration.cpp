#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    char s[4]="SOS";
    char input[99];
    cin>>input;
    int v,changes=0;
    int i=0;
    for(int i=0;i<strlen(input);i++)
    {
        v=i%3;
        if(v==0)
        {
            if(input[i]!=s[0])
                changes++;
        }
        if(v==1)
           {
               if(input[i]!=s[1]){
                changes++;}
           }
        if(v==2)
            {if(input[i]!=s[2])
                {changes++;}
            }
           // i++;
    }
    cout<<changes;
    return 0;
}
