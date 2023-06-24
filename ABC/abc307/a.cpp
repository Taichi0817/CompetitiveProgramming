#include <bits/stdc++.h>
#define rep(i, a, b) for(int i=a;i<b;i++)

using namespace std;

int main() {
    int N;
    cin >> N;

    rep(i, 0, N) {
        int total = 0;  

        rep(j, 0, 7) {
            int steps;
            cin >> steps;
            total += steps;
        }
        cout  << total << " ";
    }
    cout << endl;
    return 0;
}
