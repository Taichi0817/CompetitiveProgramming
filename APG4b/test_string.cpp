// 一行目で文字列を受け取り、二行目で文字を受け取る。文字列の中に文字がいくつ含まれるかを出力するプログラム

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int i, cnt=0;
    char n;
    getline(cin, s);
    cin >> n ;
    for(i=0;s.at(i);i++){
        // cはこれだときれいに書けるのに、、cppだとerrorをはいてしまう
        if (s.at(i) == n){
            cnt++;
        }
    }
    cout << cnt << endl;
}
