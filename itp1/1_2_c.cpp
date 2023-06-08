#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, c;
    int tmp = 0;
    cin >> a >> b >> c;
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c) {
        tmp = b;
        b = c;
        c = tmp;
    }
    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    cout << a << " " << b << " " << c << endl;
}
