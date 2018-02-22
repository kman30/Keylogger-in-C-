#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
        for(int k=n;k>=i+1;k--)
            {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
            {
            printf("#");
        }printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
} 