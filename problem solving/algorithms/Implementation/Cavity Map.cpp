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

vector<int> generateDivisors(int n) {
    vector<int> v;
    int i;
    for (i = 1; i * i < n; i++)
        if (n % i == 0) v.push_back(i), v.push_back(n / i);
    if (i * i == n) v.push_back(i);

    return v;
}

void solve(ll test_case) {
    int n;
    cin >> n;

    vector<string> grid(n);
    for (auto &item: grid) {
        cin >> item;
    }

    char answer[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            answer[i][j] = grid[i][j];
        }
    }


    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (grid[i][j] > grid[i - 1][j] and
                grid[i][j] > grid[i + 1][j] and
                grid[i][j] > grid[i][j - 1] and
                grid[i][j] > grid[i][j + 1]
                    )
                answer[i][j] = 'X';
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           cout << answer[i][j];
        }
        cout << endl;
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
