#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int hour,minute,second;
    char type;
    scanf("%d:%d:%d%c",&hour,&minute,&second,&type);
    if(type=='P')
        {
        if(hour!=12)
            hour+=12;
    }
    else if(hour==12)
        {
        hour=0;
    }
    printf("%02d:%02d:%02d",hour,minute,second);
    return 0;
}