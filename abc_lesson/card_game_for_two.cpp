#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    int A = 0, B = 0;
    cin >> N;
    vector<int> a(N);

    for (auto &i : a) {
        cin >> i;
    }

    sort(a.begin(), a.end(), greater<int>() );

    for (int i=0;i<N;i++) {
        if (i%2 == 0) {
            A += a.at(i);
        }else{
            B += a.at(i);
        }
    }

    cout << A - B  << endl;

}
