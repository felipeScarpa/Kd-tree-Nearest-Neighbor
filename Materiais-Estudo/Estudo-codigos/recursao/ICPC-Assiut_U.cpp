#include <bits/stdc++.h>
using namespace std;
#define ll long long
    
vector<ll>w;
vector<ll>v;
    
ll maxvalue(int n, int r, ll value){
    if(r < 0) return 0;
    if(n < 0) return value;
    
    return max(maxvalue(n-1, r - w[n], value + v[n]), maxvalue(n-1, r, value));
}
    
void solve(){
    int N, W; cin >> N >> W;
    
    for(int i=0; i<N; i++){
        ll a, b; cin >> a >> b;
    
        w.push_back(a);
        v.push_back(b);
    }
    
    cout << maxvalue(N-1, W, 0) << endl;
}
    
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1; //cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}