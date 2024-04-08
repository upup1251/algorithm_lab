#include <iostream>
using namespace std;
#include "matrix_product.h"
const int INT_MAX = 100000;

Matrix_product::Matrix_product(vector<int> &array) { p = array; }

void Matrix_product::Matrix_prodect_order() {
  // 通过p获得原始矩阵的个数，为p的大小减一
  int length = p.size() - 1;
  // m,s是两个二维数组，行和列的大小和矩阵大小相同
  // 我们用assign为这个两个数组分配0
  m.assign(length, vector<int>(length, 0));
  s.assign(length, vector<int>(length, 0));
  // m[i][j]是记录第i个矩阵到第j个矩阵所需的 最小 乘法次数 的值
  //   m[i][i]是自己到自己，所需的乘法次数自然为0
  //   同时这也是当子链长度为1时的 最小二乘法次数
  for (int i = 0; i < length; i++) {
    m[i][i] = 0;
  }
  // 这里l是子链的长度
  // 子链最大长度为所有的矩阵和
  // 我们这里将所有子链的可能都循环列举出来，并记录在m和s中
  for (int l = 2; l <= length; l++) {
    // 对于同一份子链长度，我们从第一个矩阵开始，对每一个位置的矩阵进行该长度的最小二乘次数的计算
    // 但是不能计算到末尾，因为我们需要为当前矩阵提供足够满足子链长度的矩阵数，这里为length-l+1
    for (int i = 0; i < length - l + 1; i++) {
      // i是当前矩阵开始处
      // j是当前矩阵加上子链长度后的结束位置
      // 我们需要对该矩阵，对于该子链长度计算出他的最小二乘次数，并将其保存在m[i][j]中,表示第i个矩阵到第j个矩阵所需的最小二乘次数
      int j = i + l - 1;
      // 先让是一个极大数，随后比他小的数便可保存为最小乘法次数
      m[i][j] = INT_MAX;
      // 在确定好开始和结束位置后，我们在这个区间中遍历每个划分点，寻找其中的
      // 最小二乘数
      for (int k = i; k < j; k++) {
        // 对于以k为划分点的区间[i][j]，其最小乘法次数为k左侧的最小乘法次数m[i][k]右侧的最小乘法次数m[k+1][j]+左右两侧看作两个整体时进行的乘法次数p[i]*p[k+1]*p[j+1]
        int q = m[i][k] + m[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
        // 找到更小的乘法次数，将其替换m[i][j]保存的旧的最小乘法次数
        // 并将该划分点保存在s[i][j]中
        if (q < m[i][j]) {
          m[i][j] = q;
          s[i][j] = k;
        }
      }
    }
  }
}

// 这里输入的是所需求的区间[i,j]
void Matrix_product::print(int i, int j) {
  if (i == j) {
    cout << "A" << i + 1;
  } else {
    cout << "(";
    // s[i][]
    print(i, s[i][j]);
    print(s[i][j] + 1, j);
    cout << ")";
  }
}
