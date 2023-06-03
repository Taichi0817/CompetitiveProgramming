#include<bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i=a;i<b;i++)
typedef long long ll;

bool isSquare(ll n) {
	ll d = (ll)sqrt(n) - 1;
	while (d * d < n) ++d;
	return d * d == n;
}

int main (void) {
    int N;
    int D;
    int X[10][10];

    cin >> N >> D;
    rep(i, 0, N) rep(d, 0, D) cin >> X[i][d];

    int ans = 0;
    rep(i, 0, N) rep(j, i + 1, N) {
        int dd = 0;
        rep(d, 0, D) dd += (X[i][d] - X[j][d]) * (X[i][d] - X[j][d]);
        if(isSquare(dd)) ans++;
    }
    cout << ans << endl;
}
