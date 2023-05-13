#include<bits/stdc++.h>

using namespace std;

int main(void) {
    int h, w;
    cin >> h >> w;

    string board[50];
    int i, j;

    for (i=0;i<h;++i) cin >> board[i];


    for (i=0;i<h;++i) {
        for (j=0;j<w;++j) {
            if (board[i][j] == '#') continue;

            int num = 0;



            board[i][j] = char (num + '0');

        }
    }

    for (i=0;i < h; ++i) cout << board[i] << endl;
}
