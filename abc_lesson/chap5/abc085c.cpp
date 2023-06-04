#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
//#pragma GCC optimize ("-O3")
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main(void) {
    int N;
    int Y;
    cin >> N >> Y;
    int ares = -1, bres = -1, cres = -1 ;

    rep(a, 0, N)rep(b, 0, N)rep(c, 0, N) {
        if(a + b + c == N && 10000 * a + 5000 * b + 1000 * c == Y) {
            ares = a;
            bres = b;
            cres = c;
        }
    }
    cout << ares << " " << bres << " " << cres <<endl;
}
