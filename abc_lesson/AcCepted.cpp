#include <bits/stdc++.h>
using namespace std;


bool isAC(string S) {
    // Sの先頭が'A'出ない場合はfalse
    if (S[0] != 'A') {
        return false;
    }
    
    //Sの先頭2文字と末尾2文字を除いた'C'の個数を調べる
    int num_c = 0;
    for (int i = 2;i+1 <S.size();i++) {
        if (S[i] == 'C') {
            num_c++;
        }
    }
    if (num_c != 1) {
        return false;
    }

    // S に含まれる大文字の個数を調べる
    int num_big = 0;
    for (auto c : S) {
        if(isupper(c)) {
            num_big++;
        }
    }
    if(num_big != 2) {
        return false;
    }

    return true;
}

int main() {

    string S;
    cin >> S;
    if (isAC(S)) {
        cout << "AC" << endl;
    }else {
        cout << "WA" << endl;
    }
}
