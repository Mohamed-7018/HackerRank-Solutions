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
    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    int ANS = 0;
    for(auto &item : a) {
        cin >> item;
        if(item <=0) ANS ++;
    }
    if(ANS >= k ) cout << "NO" <<endl;
    else cout << "YES" <<endl;


}

int main() {
    _Depressed();
    ll tc;
    tc = 1;
    cin >> tc;
    for (ll test_case = 1; test_case <= tc; test_case++) {
        solve(test_case);
    }
}
