#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, W;

vector<ll>v(61);
vector<ll>w(61);
vector<ll>ps(61, 0);


ll ks(ll i, ll r){
    if(i == 0) return 0;
    if(r < w[i]) return ks(i-1, r);
    return max(ps[i-1], ks(i - 1, r - w[i]) + v[i]);
}


void solve(){
    cin >> n >> W;

    for(int i=1; i<=n; i++){
        cin >> w[i];
        cin >> v[i];
        ps[i] = ps[i-1] + v[i];
    }

    cout << ks(n, W) << endl;
}

int main(){
    ll t=1; cin >> t;
    while(t--) solve();
}