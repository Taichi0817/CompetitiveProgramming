#include<bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a;i<b;i++)


long long calc_min(long long A[], int N) {
    long long min = 10000000000;
    int index;
    rep(i, 0, N) {
        if(min > A[i]) {
            min = A[i];
            index = i;
        } 
    } 
    return index;
}

int main(void) {
    int N;
    string S[102];
    long long A[10000];
    int min_index = 0;
    cin >> N;
    rep(n, 0, N) cin >> S[n] >> A[n];
    min_index = calc_min(A, N);
    rep(n, min_index, N) {
        cout << S[n] << endl;
    }
    rep(n, 0, min_index) {
        cout << S[n] << endl;
    }
}
