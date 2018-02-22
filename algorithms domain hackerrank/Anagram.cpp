#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;

    cin>>test;
    int *ptr=new int[test];
    string s;
    int l;
    for(int i=0;i<test;i++)
    {
        cin>>s;
        l=s.size();
        if(l%2==0)
        {
            vector<char> firstString(s.begin(),s.begin()+l/2);
            vector<char> secondString(s.begin()+l/2,s.end());
            sort(firstString.begin(),firstString.end());
            sort(secondString.begin(),secondString.end());
                vector<char> result;
                vector<char> ::iterator it;
                set_difference(firstString.begin(),firstString.end(),secondString.begin(),secondString.end(),inserter(result,result.begin()));
               //cout<<result.size();
               ptr[i]=result.size();
        }
        else
            //cout<<"-1";
            ptr[i]=-1;

    }
    for(int i=0;i<test;i++)
        cout<<ptr[i]<<endl;
}