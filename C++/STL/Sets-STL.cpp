#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >>n;
    
    set < int >  s;
    for (int i=0;i<n;i++) {
        int type,  num;
        cin >> type>> num;
        
        if (type == 1) {
            s.insert(num);
        }else if (type ==2){
            s.erase (num);
        }else {
            // set<int>::iterator itr=s.find(num); 
            // set<int>::iterator itr=s.find(100);
            if (s.find (num) == s.end() ) {
                cout << "No" <<endl;
            }else {
                cout << "Yes" << endl;
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



