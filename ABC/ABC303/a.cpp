#include<bits/stdc++.h>
using namespace std;

bool isSimiller(int N, string S, string T) {

    bool is_true = false;
    for (int i=0;i<N;i++) {
        is_true = false;
        if(S.at(i) == '1' && T.at(i) == 'l') {
            is_true = true;
        }
        if(S.at(i) == 'l' && T.at(i) == '1') {
            is_true = true;
        }
        if(S.at(i) == '0' && T.at(i) == 'o') {
            is_true = true;
        }
        if(S.at(i) == 'o' && T.at(i) == '0') {
            is_true = true;
        }
        if(S.at(i) == T.at(i)) {
            is_true = true;
        }
        if(!is_true){
            return false;
        }
    }
    return is_true;

}

int main() {
    string S;
    string T;
    int N;
    cin >> N;
    cin >> S;
    cin >> T;
    if(isSimiller(N, S, T)) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
