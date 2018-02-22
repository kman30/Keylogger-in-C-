#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> mainVector;
    int n;
    int np=0,nn=0,nz=0;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        int q;
        cin>>q;
        mainVector.push_back(q);
    }
    for(vector<int>::iterator it=mainVector.begin();it!=mainVector.end();it++)
        {
        if(*it>0)
            np++;
        else if(*it<0)
            nn++;
        else
            nz++;
        
    }
    printf("%.6f\n%",(float)np/n);
    printf("%.6f\n%",(float)nn/n);
    printf("%.6f\n%",(float)nz/n);
    
    return 0;
}
