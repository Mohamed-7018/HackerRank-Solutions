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
    string s;
    cin >> s;

    if (s[s.size()-2]  == 'A') {
        string h = "";
        h+= s[0];
        h+=s[1];
        int hour = std::stoi(h);
        hour += 12;
        if (hour == 24) h = "00";
        s[0] = h[0];
        s[1] = h[1];
        for(int i=0;i<s.size()-2;i++) cout << s[i];
    }else{
        string h = "";
        h+= s[0];
        h+=s[1];
        int hour = std::stoi(h);
        hour += 12;
        if (hour == 24) h = "12";
        else h= to_string(hour);

        s[0] = h[0];
        s[1] = h[1];
        for(int i=0;i<s.size()-2;i++) cout << s[i];
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
