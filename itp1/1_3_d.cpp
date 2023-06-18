#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a;i<=b;i++)

int main(void) {
    int a, b, c;
    int cnt = 0;
    cin >> a >> b >> c;
    rep(i, a, b) {
        if(c % i == 0) cnt++;
    }
    cout << cnt << endl;
}
