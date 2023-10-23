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

vector<int> generateDivisors (int n) {
    vector<int> v;
    int i;
    for(i=1;i*i<n;i++)
        if(n%i == 0) v.push_back(i), v.push_back(n/i);
    if(i*i == n) v.push_back(i);

    return  v;
}
void solve(ll test_case) {

  int n , m;
  cin >> n >> m;

  vector<string> a(n);
//  map<pair<int, int>, set<int>> team;
  for(auto &item : a) {
      cin >> item;
  }

    int ANS = 0;
    int CNT = 0;
    for ( int i = 0; i < n - 1; i++ ) {
        for ( int j = i+1; j < n; j++ ) {
            int val = 0;
            for ( int k = 0; k < m; k++ ) {
                if ( a[i][k] == '1' or a[j][k] == '1' ) val++;
            }
            if ( ANS < val ) {
                ANS = val;
                CNT = 1;
            }
            else if ( ANS == val ) {
                CNT++;
            }
        }
    }
    cout << ANS << endl << CNT << endl;

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
