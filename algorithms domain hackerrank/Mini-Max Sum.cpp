#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<long long>mainVector;
    long long summin=0;
    long long summax=0;
    for(int i=0;i<5;i++)
        {
        int n;
        cin>>n;
        mainVector.push_back(n);
    }
    sort(mainVector.begin(),mainVector.end());
    for(vector<long long>::iterator it=mainVector.begin();it!=mainVector.end()-1;it++)
        {
        summin+=*it;
    }
    for(vector<long long>::reverse_iterator  rit=mainVector.rbegin();rit!=mainVector.rend()-1;rit++)
        {
        summax+=*rit;
    }
    cout<<summin<<" "<<summax;
    return 0;
}
