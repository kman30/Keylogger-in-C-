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
    int *a=new int[n];
    int value,hole;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        {
        value=a[i];
        hole=i;
        while(hole>0 && a[hole-1]>value)
            {
            a[hole]=a[hole-1];
            hole--;
            
        }a[hole]=value;
        for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
    }
    return 0;
}