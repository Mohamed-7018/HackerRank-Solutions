#include "bits/stdc++.h"

using namespace std;

typedef long long int ll;
#define all(a)  a.begin(),a.end()

ll dx[] = {+0, +0, -1, +1, +1, +1, -1, -1};
ll dy[] = {-1, +1, +0, +0, +1, -1, +1, -1};

void _Depressed() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
// #ifndef ONLINE_JUDGE
//     freopen("input.in", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
}

const ll OO = 0X3F3F3F3F3F3F3F3F;
const ll N = 1e5 + 5, INF = INT_MAX, MOD = 1e9 + 7, LOG = 20;



void solve(ll test_case) {
    int num; cin >> num;
   string s;
   cin >> s;

   bool capital=false;
   bool number = false;
   bool lowercase = false;
   bool special = false;
   vector<char> c,n,l,st;

   for(auto it :s) {
       if (isdigit(it) ) {
           n.push_back(it);
           number = true;
       }else {
           if(isupper(it)) {
               c.push_back(it);
               capital = true;
           }
           else if (islower(it)) {
               l.push_back(it);
               lowercase = true;
           }
           else {
               st.push_back(it);
               special = true;
           }
       }
   }


  int ANS = 0;
   if(!special) ANS ++;
   if(!capital) ANS ++;
   if(!number) ANS ++;
   if(!lowercase) ANS ++;

   cout << max(6- (int)s.size() , ANS)  <<endl;

}

int main() {
    _Depressed();
    ll tc;
    tc = 1;
//    cin >> tc;
    for (ll test_case = 1; test_case <= tc; test_case++) {
        solve(test_case);
    }
}
