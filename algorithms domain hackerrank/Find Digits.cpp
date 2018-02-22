#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int temp,count,d;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        temp=n;
        count=0;
        while(temp!=0)
            {
            d=temp%10;
            if(d==0) goto ab;
            if(n%d==0) count++;
            ab: temp=temp/10;
        }
        cout<<count<<endl;
    }
    return 0;
}