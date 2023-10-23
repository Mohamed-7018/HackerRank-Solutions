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
    double n;
    cin >> n;

    vector<int> arr((int)n);
    double neg = 0, pos = 0, z= 0 ;
    for(auto &i : arr) {
        cin >> i;
        if(i < 0 ) neg++;
        else if (i == 0) z ++ ;
        else pos++;
    }

    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(6);
    cout << pos / n << endl;
    cout << neg / n << endl;
    cout << z / n << endl;


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
