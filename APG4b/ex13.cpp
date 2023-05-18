#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> score(N);
    int sum = 0;
    int avg;
    int i;
    
    for(i=0;i<N;i++) {
        cin >> score.at(i);
        sum += score.at(i);
    }
    avg = sum / N;  

    for(i=0;i<N;i++) {
        cout <<  abs(score.at(i) - avg) << endl;
    }
}
