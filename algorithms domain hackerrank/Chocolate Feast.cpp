#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int getTotalChoclates(int n, int c, int m) {
    int wrappers = n/c;
    int total = wrappers;
    while(wrappers >= m) {
        total += wrappers/m;
        wrappers = wrappers/m + wrappers%m;
    }
    return total;
}
 
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        cout << getTotalChoclates(n,c,m) << endl;
    }
    return 0;
}