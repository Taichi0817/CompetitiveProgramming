#include<bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i=a;i<b;i++)

int main(void) {
    int N;
    string ans = "No";

    cin >> N;
    
    rep(i, 0, 30) rep(j, 0, 30)
        if (i*7 + j*4==N) {
            ans = "Yes";
            break;
        } else if (i*4 + j*7 > N) continue;
    
    cout << ans << endl;
}

