#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int heightUTree(int n) {
    int res=1;
    for(int c=1; c <= n; c++) {
        if(c%2 == 0) res++;
        else res *= 2;
    }
    return res;
}
 
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << heightUTree(n) << endl;
    }
    return 0;
}