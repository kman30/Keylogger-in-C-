
//problem: https://www.hackerrank.com/challenges/array-left-rotation/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int n = 0; int d = 0;

cin >> n;
cin >> d;

int *arr = new int[n];

for(int i = 0; i < n; i++){
      cin >> arr[i];
}

//store all the elements being shifted out
int *temp = new int[d];
for (int i = 0; i < d; i++)
{
    temp[i] = arr[i];
}

//shift remaining values left
for (int i = d; i < n; i++)
{
    arr[i-d] = arr[i];
}

//insert elements that were shifted out.
for (int i = n-d; i < n; i++)
{
    arr[i] = temp[i+d-n];
}

for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}

delete [] arr;
delete [] temp;
return 0;
}