#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int l,pair=0;
    cin >> n >> l;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    //sort(a.begin(),a.end());
    for(int i=0;i!=a.size();i++)
        {
        for(int k=i+1;k<n;k++)
            {
            if((a[i]+a[k])%l==0)
                pair++;
        }
    }cout<<pair;
    return 0;
}
