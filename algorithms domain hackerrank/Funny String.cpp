#include<stdio.h>
 #include<stdlib.h>
 #include<bits/stdc++.h>
 #include<cstring>
 #include<algorithm>
 using namespace std;
 int main()
 {
     int n;
     cin>>n;
     string s,r;
     string *store;
     store=new string[n];

     for(int i=0;i<n;i++)
     {
         int counter=0;
         cin>>s;
         r=s;
         reverse(r.begin(),r.end());
         for(int i=0;i<s.length();i++)
         {
             if(abs(s[i]-s[i-1])==abs(r[i]-r[i-1]))
             {
                 counter++;
             }
         }
         if(counter==s.length()-1)
         {
             //cout<<"Funny"<<endl;
             store[i]="Funny";
         }
         else
            //cout<<"Not Funny"<<endl;
            store[i]="Not Funny";
     }
     for(int i=0;i<n;i++)
     {
         cout<<store[i]<<endl;
     }
     return 0;
 }
