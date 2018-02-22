#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q, type, x, y, lastAns = 0, seq; cin>>n>>q;

vector<vector<int>> list;   

for(int i = 0 ;i < n;i++){
    vector<int> temp;
    temp.push_back(i);
    list.push_back(temp);        
}

while(q--){
    cin>>type>>x>>y;
    switch(type){

        case 1:
            seq = (x ^ lastAns) % n;
            list[seq].push_back(y);
            break;

        case 2:
            seq = (x ^ lastAns) % n;
            //First element of each vector is its index. So we decrease the array size by 1 and in order to get the element from vector we increase by 1.
            lastAns = list[seq][y%(list[seq].size()-1)+1];
            cout<<lastAns<<endl;
            break;
    }
}
return 0;
}
