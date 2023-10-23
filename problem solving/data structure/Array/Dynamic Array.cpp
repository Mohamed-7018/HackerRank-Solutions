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

int n,q;
int t,x,y;
vector < int > arr[N];
int lastAnswer = 0;

void solve(ll test_case) {
    cin >> n >> q;

    while(q--) {
        cin >> t >> x >>y;
        int idx = (x xor lastAnswer) % n;
        if (t==1) {
            arr [idx].push_back(y);
        }else{
            lastAnswer = arr[idx][y% ((int)arr[idx].size())];
            cout << lastAnswer <<endl;
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
