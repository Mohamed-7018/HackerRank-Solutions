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


bool comp (string a, string b) {
    if(a.length() == b.length()) return  a < b;
    else return a.length() < b.length();
}
void solve(ll test_case) {
   int n,v;
   cin >> v >> n;

   vector<int> a(n);
   for(auto &item : a)
       cin >> item;

   sort(all(a));
    for(int i=0;i<n;i++) {
        if(a[i] == v){
            cout << i << endl;
            break;
        }
    }

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
