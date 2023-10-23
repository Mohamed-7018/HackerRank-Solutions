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


void insertionSort(int ar_size, int *  ar) {
    for(int i = 1; i < ar_size; i++) {
        int V = ar[i];
        for(int j = i; j >= 0; j--) {
            if(V < ar[j-1]) {
                ar[j] = ar[j-1];
            } else {
                ar[j] = V;
                break;
            }
        }
        // Print the array after each iteration
        for(int i = 0; i < ar_size; i++) {
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
}

void solve(ll test_case) {
  int n;
  cin >> n;

  vector <int>  a(n);
  for(auto &it : a) cin >> it;


  sort(all(a));
  for(auto it : a) cout << it << ' ';
  cout << endl;



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
