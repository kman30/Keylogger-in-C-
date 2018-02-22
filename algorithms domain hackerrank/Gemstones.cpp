#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int alpha[26]={0};
    int cnt=0;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        sort(s[i].begin(),s[i].end());
        //vector<string>:: iterator it;
        //it=unique(s[i].begin(),s[i].end());
        //s[i].resize(distance(s[i].begin(),it));
        s[i].erase(unique(s[i].begin(),s[i].end()),s[i].end());
        for(int k=0;k<s[i].size();k++)
        {
            char c=s[i].at(k);
            alpha[c-'a']++;
            if(alpha[c-'a']==n)
                cnt++;
        }
    }
    cout<<cnt<<endl;
        return 0;

}
