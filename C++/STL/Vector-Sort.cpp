#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    vector<int> arr;
    for (int i=0;i<n;i++){
        int x;
        cin >>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end()); 
     for (int i=0;i<n;i++){
       cout << arr[i] << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
