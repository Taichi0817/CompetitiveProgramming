#include <iostream>
#include <vector>
#include <random>

// マス目の縦と横のサイズ
const int H = 3;
const int W = 3;

// 任意のマスの8近傍の和を計算する関数
int calculateSumOfNeighbours(const std::vector<std::vector<int>>& grid, int row, int col) {
    int sum = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            int newRow = row + i;
            int newCol = col + j;
            if (newRow >= 0 && newRow < H && newCol >= 0 && newCol < W && !(i == 0 && j == 0)) {
                sum += grid[newRow][newCol];
            }
        }
    }
    return sum;
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 2);

    // マス目の初期化
    std::vector<std::vector<int>> grid(H, std::vector<int>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            grid[i][j] = dist(gen);
        }
    }

    // マス目の表示
    std::cout << "マス目の数字:" << std::endl;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // 任意のマスの座標を入力
    int row, col;
    std::cout << "マスの行番号を入力してください: ";
    std::cin >> row;
    std::cout << "マスの列番号を入力してください: ";
    std::cin >> col;

    // 8近傍の和を計算
    int sum = calculateSumOfNeighbours(grid, row-1, col-1);
    std::cout << "8近傍の和: " << sum << std::endl;

    return 0;
}
