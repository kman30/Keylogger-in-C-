#include <iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
   int n;
  // string s;
  cin>>n;
  int counter=0;
  string s;
  cin>>s;
  for(int i=2;i<n;i++)
  {
      if(s[i]=='0' && s[i-2]=='0' && s[i-1]=='1')
      {
          counter++;
          i+=2;
      }
  }
  cout<<counter;


}
