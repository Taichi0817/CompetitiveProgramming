#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a;i<b;i++)
#define rrep(i, a, b) for(int i=a;i>=b;i--)


int main (void) {
    int N;
    int X;
    int L[100];

    cin >> N >> X;
    rep(i, 0, N) cin >> L[i];
    
    int d = 0; int ans = 1;
    rep(i, 0, N) {
        d += L[i];
        if (X < d) break;
        ans++;
    }
    cout << ans << endl;
}
