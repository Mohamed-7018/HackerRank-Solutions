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


bool valid(string s) {
    for(int i=1;i<s.size();i++) {
        if(s[i]== s[i-1])
            return false;
    }
    return true;
}

void solve(ll test_case) {
   int n;
   cin >> n;

   string s; cin>>s;
   int ANS = 0;

   for(char a = 'a'; a<='z'; a++) {
       for(char b='a'; b<='z';b++) {
           if(a!=b) {
               if(s.find(a) == string::npos) continue;
               if(s.find(b) == string::npos) continue;

               string out;
               for(const auto it : s) {
                   if(it == a or it == b)
                       out.push_back(it);
               }
               if(valid(out))
                   ANS = max(ANS, (int) out.size());
           }
       }
   }

   cout << ANS <<endl;
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
