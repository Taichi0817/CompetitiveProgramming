#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i=a;i<b;i++)
#define rrep(i, a, b) for(int i=a;i>=b;i--)
#define fore(i, a) for(auto &i:a)
#define all(x) (x).begin(), (x).end()

int main(void) {
    int H; // 高さ
    int W; // 幅
    string B[101]; 
    cin >> H >> W;
    rep(y, 0, H) cin >> B[y];

    rep(y, 0, H)rep(x, 0, W) if(B[y][x] == '.') {
        int c = 0;
        rep(dx, -1, 2) rep(dy, -1, 2) {
            if(dx == 0 and dy == 0) continue;
            int xx = x + dx;
            int yy = y + dy;
            if(0 <= xx and xx < W and 0 <= yy and yy < H) {
                if (B[yy][xx] == '#') c++;
            }
        }
        B[y][x] = char('0' + c);
    }

    rep(y, 0, H)cout << B[y] << endl;

}
