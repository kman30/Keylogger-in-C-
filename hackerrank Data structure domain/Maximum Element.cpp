#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stack<int> ms;
    stack<int> ts;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        int q;
        cin>>q;
        switch(q)
            {
            case 1:int x;
            cin>>x;
            if(ms.empty()&&ts.empty())
                {
                ms.push(x);
                ts.push(x);
                
            }else
                 {
                ms.push(x);
                ts.push(max(x,ts.top()));
            }
                    break;
            case 2:
            if(!ms.empty()&&!ts.empty())
                {
                ms.pop();
                ts.pop();
            }
            break;
            case 3:
            cout<<ts.top()<<endl;
            break;
            default:
            break;
        }
    }
    return 0;
}
