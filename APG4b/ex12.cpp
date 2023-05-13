#include<bits/stdc++.h>
using namespace std;

int main(void) {
    string S;
    cin >> S;
    int i, ans=1;

    for(i=0;i<S.size();i++) {
        if(S.at(i) == '+') {
            ans++;
        }
        if(S.at(i) == '-') {
            ans--;
        }
    }
    cout << ans << endl;
}
