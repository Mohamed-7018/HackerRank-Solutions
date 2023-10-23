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
// #ifdef ONLINE_JUDGE
//     freopen("input.in", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
}

const ll OO = 0X3F3F3F3F3F3F3F3F;
const ll N = 1e5 + 5, INF = INT_MAX, MOD = 1e9 + 7, LOG = 20;



void solve(ll test_case) {
    double n;
    cin >> n;

    vector<int> a((int)n);
    double pos = 0,neg = 0,z = 0;
    for(auto &item : a) {
        cin >> item;
        if(item == 0)
            z++;
        else if(item < 0)
            neg ++;
        else pos++;
    }

    cout << fixed << showpoint;
    cout << setprecision(6);
    cout << pos/n << endl;
    cout << neg/n << endl;
    cout << z/n << endl;
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
