#include <bits/stdc++.h>
using namespace std;
#define ll long long
    
void lm(int i, int m, int n, vector<int>& a){
    if(i == n){
        cout << endl;
        return;
    }
    m = max(m, a[i]);
    cout << m << ' ';
    lm(i+1, m, n, a);
}
    
int main(){
    int n; cin >> n;
    
    vector<int>a(n);
    
    for(int i=0; i<n; i++) cin >> a[i];
    
    lm(0, -1e9 - 10, n, a);
}