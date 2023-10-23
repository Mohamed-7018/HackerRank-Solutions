#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    vector < int  > arr;
    for (int i=0;i<n;i++ ) {
        int x;
        cin >>x;
        
        arr.push_back(x);
    }
    
    int d;
    cin >>d;
    arr.erase(arr.begin()+d-1);
    // for (const auto&op : arr) {
    //     cout << op << " ";
    // }
    // cout << endl;
    
    int a,b;
    cin >> a>>b;
    arr.erase(arr.begin()+a-1,arr.begin()+b-1);
    
    cout  << arr.size()<< endl;
    for (const auto&op : arr) {
        cout << op << " ";
    }
    return 0;
}


// 1 8 9
