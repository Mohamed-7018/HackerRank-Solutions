#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  
  std::map<string, string> phoneBook;
  
    
    int n;
    cin>>n;
    
    for (int i =0; i<n; i++) {
        string name;
        string number;
        cin>>name>>number;
        phoneBook[name]=number;
    }
    
    std::map<string,string>::iterator it;
    string query;
    while( cin >> query ){
        it = phoneBook.find(query);
        
        if ( it != phoneBook.end() ){     
            cout << it->first << "=" << it->second << '\n';
        }
        else{ 
            cout << "Not found" << '\n';
        }
    }   
    return 0;
}