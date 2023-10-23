#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    
    
    map <string , int>  m;
    for (int i=0;i<n;i++) {
        int type,x;
        string name;
        cin >> type;
        
        if (type == 1)  {
            cin >> name  >> x;
            if (m.find(name) == m.end()) m.insert(make_pair(name,x));
            else {
                x+=m[name];
                m.erase(name);
                m.insert(make_pair(name,x));  
            }
        }else if  (type == 2)  {
            cin >> name;
            m.erase (name);
        }else if(type == 3)  {
            cin >> name;
            cout << m[name]<< endl;
        }
    }  
    return 0;
}



