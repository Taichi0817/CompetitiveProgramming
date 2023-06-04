#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a;i<b;i++)

int main(void) {
    int H, W, X, Y;
    string S[101];
    int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};

    cin >> H >> W >> Y >> X;
    X--; Y--;
    rep(y, 0, H) cin >> S[y];

    int ans= 1;
    rep(d, 0, 4) {
        int x = X, y = Y;
        while(1) {
            x += dx[d];
            y += dy[d];


            if (x < 0 || W <=x || y < 0 || H <= y) break;

            if (S[y][x] == '#') break;


            ans++;
        }
    }
    cout << ans << endl;
}
