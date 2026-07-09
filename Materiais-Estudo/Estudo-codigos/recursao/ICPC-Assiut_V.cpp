#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, x;

bool expre(ll i, ll act, vector<ll>& a){
    if(act == n) return (i == x);
    return (expre(i+a[act], act + 1, a) || expre(i-a[act], act + 1, a));
}

void solve(){
    cin >> n >> x;
    vector<ll>a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    cout << (expre(a[0], 1, a) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1; //cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}