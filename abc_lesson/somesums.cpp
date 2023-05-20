#include <bits/stdc++.h>
using namespace std;

int sum_each_digit(int n)  {
    int sum_digit = 0;
    while (n){
        sum_digit += n % 10;
        n /= 10;
    }
    return sum_digit;
}

int main() {
    int n, a, b, s = 0;
    int sum = 0;
    cin >> n >> a >> b;

    while (n) {
        s = sum_each_digit(n);
        /* cout << s << endl; */
        if (s >= a && s<= b) {
            sum += n; 
        }
        n--;
    }

    cout << sum << endl;

}
