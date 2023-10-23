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
void output(const vector<int>& a){
    cout << a[1];
    for(int j = 2; j < a.size(); ++j){
        cout << " " << a[j];
    }
    cout << endl;
}
void insertionSort(vector <int>&  a) {
    a.insert(a.begin(), INT_MIN);
    int n = a.size();
    int num = a[n - 1];
    for(int i = n-2; i >= 0; --i){
        if(a[i] > num){
            a[i + 1] = a[i];
            output(a);
        }else{
            a[i + 1] = num;
            output(a);
            break;
        }
    }
}

void solve(ll test_case) {
  int n;
  cin >> n;

  vector<int> a(n);
  for(auto &it : a) cin >> it;


  insertionSort(a);

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
