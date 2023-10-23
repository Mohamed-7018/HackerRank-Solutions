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
//#ifndef ONLINE_JUDGE
//    freopen("input.in", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
}

const ll OO = 0X3F3F3F3F3F3F3F3F;
const ll N = 1e5 + 5, INF = INT_MAX, MOD = 1e9 + 7, LOG = 20;

int arr[6][6];
int ANS = INT_MIN;

int ANSArr[4][4];

int solve3(int i, int j) {
    return ANSArr[i][j] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                          arr[i + 1][j + 1] +
                          arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

}

void solve(ll test_case) {
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            cin >> arr[i][j];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            ANS = max(ANS, solve3(i, j));
//
//    for (int i=0;i<4;i++) {
//        for (int j = 0; j < 4; j++)
//            cout << ANSArr[i][j] << ' ';
    cout << ANS << endl;

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
