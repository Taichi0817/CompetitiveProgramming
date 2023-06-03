#include <bits/stdc++.h>
using namespace std;

long long approximateN(long long N) {
  if (N <= 999) {
    return N;
  } else if (N <= 9999) {
    return N / 10 * 10;
  } else if (N <= 99999) {
    return N / 100 * 100;
  } else if (N <= 999999) {
    return N / 1000 * 1000;
  } else if (N <= 9999999) {
    return N / 10000 * 10000;
  } else if (N <= 99999999) {
    return N / 100000 * 100000;
  } else if (N <= 999999999) {
    return N / 1000000 * 1000000;
  } else if (N <= 9999999999) {
    return N / 10000 * 10000;
  } else {
    return N / 100000 * 100000;
  }
}

int main() {
  long long N;
  cin >> N;

  long long approximate = approximateN(N);
  cout << approximate << endl;

  return 0;
}
