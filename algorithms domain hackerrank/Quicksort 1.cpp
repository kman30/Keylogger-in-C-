#include <iostream>

using namespace std;
void partition(int *arr,int n)
{
int temp=0;
int pivot=arr[0];
int pIndex=n-1;
for(int i=n-1;i>=1;i--)
{

    if(arr[i]>=pivot)
    {
       temp=arr[i];
       arr[i]=arr[pIndex];
       arr[pIndex]=temp;
       pIndex--;
    }
}temp=arr[pIndex];
arr[pIndex]=arr[0];
arr[0]=temp;
}
int main()
{
    int n;
    int start=0;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    partition(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
