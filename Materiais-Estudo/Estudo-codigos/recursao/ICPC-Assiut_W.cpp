#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool reach(ll x, ll n){
    if(x == n) return true;
    if(x > n) return false;
    return (reach(x*10, n) || reach(x*20, n));
}

void solve(){
    ll n; cin >> n;

    cout << (reach(1, n) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}