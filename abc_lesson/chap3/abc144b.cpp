#include<bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i=a;i<b;i++)

int main(void) {
    int N;
    string ans = "No";

    cin >> N;
    
    rep(i, 0, 10) rep(j, 0, 10)
        if (i*j==N) {
            ans = "Yes";
            break;
        }
    
    cout << ans << endl;
}

