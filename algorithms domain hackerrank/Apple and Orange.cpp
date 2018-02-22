#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int s,t,a,b,m,n,sa=0,so=0,appledist,orangedist,distanceOfOranges,distanceOfApples;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0;i<m;i++)
        {
        cin>>appledist;
        distanceOfApples=a+appledist;
        if(distanceOfApples>=s && distanceOfApples<=t)
            sa++;

    }
    for(int i=0;i<n;i++)
        {
        cin>>orangedist;
        distanceOfOranges=b+orangedist;


        if(distanceOfOranges>=s && distanceOfOranges<=t)
            so++;
    }cout<<sa<<endl;
    cout<<so<<endl;

    return 0;
}
