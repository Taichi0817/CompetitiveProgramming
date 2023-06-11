#include<bits/stdc++.h>
using namespace std;

int main() {
  int W, H, x, y, r;
  std::cin >> W >> H >> x >> y >> r;

  if (0 <= (x - r) and (x + r) <= W and 0 <= (y - r) and (y + r) <= H) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}
