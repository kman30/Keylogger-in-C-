#include <iostream>
#include <stdlib.h>
using namespace std;
int reverese(int a)
{
    int rem,sum=0;
    while(a>0)
    {
        rem=a%10;
        sum=(sum*10)+rem;
        a=a/10;
    }return sum;
}
int main()
{
    int i,j,k,tot=0;
    cin>>i>>j;
    cin>>k;
    while(i<=j)
    {
        if(abs(i-reverese(i))%k==0)
           tot++;
           i++;

    }cout<<tot;
}