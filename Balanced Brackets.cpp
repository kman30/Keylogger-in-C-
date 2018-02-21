#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<stack>
using namespace std;
bool AreParanthesisSame(char opening,char closing)
    {
    if(opening=='('&& closing==')')return true;
    else if(opening=='{'&& closing=='}')return true;
    else if(opening=='['&& closing==']')return true;
     return false;
}
string CheckParanthesis(string exp)
    {
    stack<char> S;
    for(int i =0;i<exp.length();i++)
        {
        if(exp[i]=='(' || exp[i]=='{'||exp[i]=='[')
            S.push(exp[i]);
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(S.empty()||!AreParanthesisSame(S.top(),exp[i]))
            {return "NO";}
            else{
            S.pop();}
            
        }
    }
    if(S.empty()==true){
        //cout<<"YES"<<endl;
        return "YES";
    }
    else{
       // cout<<"NO"<<endl;
        return "NO";
    }
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int nos;
    cin>>nos;
    for(int i=0;i<nos;i++)
        {
        string exp;
        cin>>exp;
        cout<<CheckParanthesis(exp)<<endl;
    }
    return 0;
}
