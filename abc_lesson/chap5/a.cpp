#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=0;i<b;i++)


int main(void){
    /* rep(X, 4, 100) { */
    int X;
 cin >> X;
 
    int ans = 1;
    rep(b, 2, X) {
        int x = b * b;
        while (x <= X) {
            ans = max(ans, x);
            x *= b;
        }
    }
    cout << ans << endl;
    /* } */
}
