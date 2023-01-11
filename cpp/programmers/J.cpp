#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 삼각형 완성 조건(2)
int solution(vector<int> sides) {
  int answer = 0;

  sort(sides.begin(), sides.end());

  int top = sides[1];    // 6
  int other = sides[0];  // 3

  for (int i = top - other + 1; i <= top; i++) {
    answer++;
  }
  for (int i = top + 1; i < top + other; i++) {
    answer++;
  }

  return answer;
}

int main() {
  vector<int> v;
  v.push_back(3);
  v.push_back(6);
  cout << solution(v);
  return 0;
}