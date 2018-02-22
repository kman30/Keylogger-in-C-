#include <iostream>
using namespace std;
int main() {
    int n;
    std::cin>>n;
    int *array = new int[n],numbers[100] = {0};
    for(int i=0;i<n;i++) {        
        std::cin>>array[i];
        numbers[array[i]]++;
    }
    for(int i=0;i<100;i++)
        std::cout<<numbers[i]<<" ";
    return 0;
}