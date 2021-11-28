#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    string str[n],even="",odd="";
    
    for (int i=0; i<n; i++) {
        cin>>str[i];
        for (int j=0; j<str[i].length(); j++){
             if (j%2==0) even+=str[i][j]; 
             else odd+=str[i][j];
        }
         cout <<even<<" "<<odd<<endl;
        even = odd ="";
    }
    
   
    
    return 0;
}
