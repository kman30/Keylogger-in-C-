#include <iostream>

using namespace std;

int main()
{
    int n,k,pay;
    cin>>n>>k;
    int *c=new int[n];
    for(int i=0;i<n;i++)
        cin>>c[i];
    int charged;
    cin>>charged;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i!=k)
        {
            sum=sum+c[i];
        }
        //else
          //  sum+=c[i];
    }
    //cout<<sum<<endl;
    //cout<<sum/2<<endl;
    sum=sum/2;
    pay=charged-sum;
    //cout<<pay;
    //cout << "Hello world!" << endl;
    if(pay==0)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<pay;
    return 0;
}
