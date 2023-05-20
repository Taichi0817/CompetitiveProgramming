#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int i;
    int cnt = 0;
    bool can_do = true;

    for(i=0;i<n;i++) {
        cin >> a.at(i);
    }

    while(can_do) {
        for(i=0;i<n;i++) {
            if (a.at(i) % 2 == 0) {
            a.at(i) /= 2;
            }else{
                can_do = false;
            }
        }
        if(can_do){
            cnt++;
        }
    }
    cout << cnt << endl;
}
