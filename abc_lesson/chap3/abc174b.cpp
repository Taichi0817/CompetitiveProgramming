#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i=a;i<b;i++)
#define rrep(i, a, b) for(int i=a;i>=b;i--)

bool calc(int X, int Y, int D) {
    double t = sqrt(pow(X, 2) + pow(Y, 2));
    return (t <= D ? true : false);
}

int main(void) {
    int N, D;
    int X, Y;
    int cnt = 0;
    cin >> N >> D;
    rep(i, 0, N) {
        cin >> X >> Y;
        if (calc(X, Y, D)) cnt++;
    }
    cout << cnt << endl;
}

