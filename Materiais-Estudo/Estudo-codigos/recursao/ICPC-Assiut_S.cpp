#include <bits/stdc++.h>
using namespace std;
#define ll long long

double avg(double x, int n, int i, vector<double>& a){
    if(i == n) return x;
    return avg(x + a[i]/n, n, i+1, a);
}

void solve(){
    int n; cin >> n;
    vector<double>a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    cout << fixed << setprecision(6) << avg(0, n, 0, a) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1; //cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}