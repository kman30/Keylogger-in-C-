#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> h(26);
    for(int& a : h)
        cin >> a;
    
    string word;
    cin >> word;
    
    int max = h[word[0] - 'a'];
    for(char c : word)
        if(h[c - 'a'] > max)
            max = h[c - 'a'];
        
    cout << word.length() * max;
    

    return 0;
}
