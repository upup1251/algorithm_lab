#include <iostream>
#include <vector>
using namespace std;

class Matrix_product {
private:
  vector<int> p; // 这里是存储相乘矩阵的维数的数组
  vector<vector<int>>
      m; // 这里是个二维数组、存储子问题的解答,即最小的乘法次数
         // m[i][j]表示从第i个矩阵到第j个矩阵所需的 最小 乘法次数
  vector<vector<int>>
      s; // 这里是存储括号划分位置的数组,即存储最优解对应的划分点
         // s[i][j]表示从第i个矩阵到第j个矩阵的最优划分点的 下标
public:
  // 构造方法
  Matrix_product(vector<int> &);
  Matrix_product();
  // 访问私有变量
  vector<vector<int>> &get_m() { return m; }
  vector<vector<int>> &get_s() { return s; }
  // 可获得m和s
  void Matrix_prodect_order();
  // 通过m和s打印出最终表达式
  void print(int, int);
};
