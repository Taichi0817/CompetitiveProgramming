#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a;i<b;i++)

int main(void) {
    
    int N;
    int X;
    int L[102];

    cin >> N >> X;
    rep(n, 0, N) cin >> L[n];

    int D = 0;  int ans = 1;
    rep(n, 0, N) {
        D += L[n];
        if(X < D) break;
        ans++;
    }
    cout << ans << endl;
}
