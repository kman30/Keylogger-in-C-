#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,like,p,v;
cin>>n;
v=6;
p=0;
like=2;

for(int i =2;i<=n;i++)
    {

    p=floor(v/2);

    like+=p;
    v=(p)*3;

}
cout<<like<<endl;
    return 0;
}
