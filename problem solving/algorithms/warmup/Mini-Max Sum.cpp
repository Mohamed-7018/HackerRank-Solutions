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
   ll n=5;

   vector<ll> a(n); ll SUM=0;
   for(ll i=0; i < n ; i++) {
       cin >> a[i];
       SUM +=a[i];
   }

//   cout << SUM << endl;
   vector<ll> ANS;
   for (ll i=0;i<n;i++) {
       ANS.push_back(SUM  - a[i]);
   }

//   for(auto it  : ANS) cout << it << ' ';
//   cout << endl;
   sort(all(ANS));
   cout << ANS [0] << ' ' << ANS [n-1] << endl;


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
