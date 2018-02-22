#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
cin>>n;
for(int j = 0; j< n; j++){

string s;
cin>>s;
int del = 0;
for(int i = 1; i< s.length(); i++)
    {
    if(s[i] == s[i-1])
        del++;
}
    cout<<del<<endl;
}
//return 0;
    return 0;
}
