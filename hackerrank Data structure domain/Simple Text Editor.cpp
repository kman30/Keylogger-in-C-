#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   /* stack<string> mainStack;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        int q;
        cin>>q;
        switch(q)
            {
            case 1:
            string word;
            int j=0;
            while(word[j]!='\0')
                {
                mainStack.push(word[j]);
                j++;
            }
                break;
            case 2:
                int nd;
                cin>>nd;
                int msSize=mainStack.size();
                if(nd<msSize)
                    {
                    for(int i=0;i<n;i++)
                        {
                        mainStack.pop();
                    }
                }
                break;
            case 3:
                int k;
                cin>>k;
                cout<<mainStack[k-1]<<endl;
                break;
            case 4:
                string s=mainStack.top();
                mainStack.pop();
                break;
                
            }
            
        }
    }*/
   /* int n,q,len,k;
    cin>>n;
string s="",s1,a="";
stack<string> st;
for(int i=0;i<n;i++)
    {
    cin>>q;

    switch (q)
    {
        case 1: cin>>s1;
                st.push(s);
                s+=s1;

                break;
        case 2: cin>>k;
                st.push(s);
                a=s;
                len=a.length();
                s="";
                s.append(a,0,len-k);
                break;
        case 3: cin>>k;
                   cout<<s[k-1]<<"\n";
                break;
        case 4:
                s=st.top();
                st.pop();

                break;

    }*/
     stack<string> history;
   string s="",w;
   history.push(s);
   int n,q,k;
   cin>>n;
   while(n--){
     cin>>q;
     switch(q){
      case 1: cin>>w; history.push(s); s.append(w);  break;
      case 2: cin>>k; history.push(s); s.erase(s.end()-k,s.end()); break;
      case 3: cin>>k; cout<<s[k-1]<<endl; break;
      case 4: s=history.top(); history.pop();break;
     }
   }
    return 0;
}
