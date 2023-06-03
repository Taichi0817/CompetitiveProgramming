#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a;i<b;i++)

bool is_infected(int D, int sx, int sy, int tx, int ty) {
    if(sqrt(pow(sx - sy, 2) - pow(tx - ty, 2))  < D) {
        return true;
    }
    return false;
}

int main(void) {
    int N;
    int D;
    int X[2003];
    int Y[2003];

    cin >> N >> D;
    rep(n, 0, N) cin >> X[n] >> Y[n];

    rep(n, 0, N) cout << X[n] << Y[n] << endl;
}
