#include<bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i=a;i<b;i++)
#define fore(i,a) for(auto &i:a)

constexpr int INF = 1 << 30;

int main(void) {
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    fore(xi, x) cin >> xi;
    fore(yi, y) cin >> yi;

    int minimum_dist = INF;
    rep(i, 0, N) rep(j ,i + 1, N) {
        int dx = x[i] - x[j];
        int dy = y[i] - y[j];
        int dist = dx * dx + dy * dy;

        minimum_dist = min(minimum_dist, dist);
    }
    cout << minimum_dist << endl;
}
