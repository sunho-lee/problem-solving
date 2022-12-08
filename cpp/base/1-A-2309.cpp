#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// 왕비를 피해 일곱 난쟁이들과 함께 평화롭게 생활하고 있던 백설공주에게 위기가
// 찾아왔다. 일과를 마치고 돌아온 난쟁이가 일곱 명이 아닌 아홉 명이었던 것이다.
// 아홉 명의 난쟁이는 모두 자신이 "백설 공주와 일곱 난쟁이"의 주인공이라
// 주장했다. 뛰어난 수학적 직관력을 가지고 있던 백설공주는, 다행스럽게도
// 일곱난쟁이의 키의 합이 100이 됨을 기억해 냈다. 아홉 난쟁이의 키가 주어졌을
// 때, 백설공주를 도와 일곱 난쟁이를 찾는 프로그램을 작성하시오.
//
// int[9] = inputs - 아홉 난쟁이들의 키를 저장한 배열이 주어진다.
// int[7] = results - 일곱 난쟁이의 키를 오름차순으로 출력한다.
// 일곱 난쟁이를 찾을 수 없는경우는 없다.
vector<int> solution(vector<int> inputs) {
  vector<int> results;
  // Write your code here

  return results;
}

vector<int> input(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  return a;
}

void output(vector<int> results) {
  for (int i = 0; i < results.size(); i++) {
    cout << results[i] << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<int> inputArray(9);

  vector<int> input = ::input(inputArray);
  vector<int> result = ::solution(input);

  ::output(result);
  return 0;
}
