
#include<unordered_set>
#include<iostream>
#include<map>
#include<string.h>
#include<vector>
#include<fstream>
#include<cstdlib>
#include<algorithm>
#define ll long long
using namespace std;
map<int,int> dp;
long long totalCoins(int a[],int money,int index,int sizeofa)
{
    //int length=sizeof(a/a[0]);
    long long result;
    if (money==0)
    {
        return 1;
    }
    if(index>=sizeofa)
        return 0;
    auto itr=dp.find(a[index]);
    if(itr!=dp.end())
    {
        return itr->second;
    }
     long long ways=0;
    int amountWithCoins=0;
    while(amountWithCoins<=money)
    {
        int remaining=money-amountWithCoins;
        ways+=totalCoins(a,remaining,index+1,sizeofa);
        amountWithCoins+=a[index];
    }
    dp[a[index]]=ways;
    result=ways;
    return result;
}
int main()
{
   int money;
   int m;
   cin>>money;
   cin>>m;
   int *p=new int[m];
   for(int i=0;i<m;i++)
   {
       cin>>p[i];
   }
  long long result=totalCoins(p,money,0,m);
   cout<<result-1;
   return 0;
}
