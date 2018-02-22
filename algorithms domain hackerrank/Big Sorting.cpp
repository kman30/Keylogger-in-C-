#include <bits/stdc++.h>

using namespace std;
bool myfun(string &i,string &j)
{
    int l1=i.length();
    int l2=j.length();
    if(l1==l2)
    {
        return i<j;
    }
    else
        return l1<l2;
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    ostream_iterator<string> out(cout,"\n");
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    sort(unsorted.begin(),unsorted.end(),myfun);
    copy(unsorted.begin(),unsorted.end(),out);
    // your code goes here
    return 0;
}
