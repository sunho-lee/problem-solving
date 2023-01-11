#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 프로그래머스 분수의 덧셈
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
  vector<int> answer;

  int top = numer1 * denom2 + numer2 * denom1;  // 10
  int bot = denom1 * denom2;                    // 8

  int x = 2;
  while (true) {
    if (x > top || x > bot) {
      break;
    } else if (top % x == 0 && bot % x == 0) {
      top = top / x;
      bot = bot / x;
    } else {
      x++;
    }
  }

  answer.push_back(top);
  answer.push_back(bot);

  return answer;
}

int main() {
  vector<int> r = solution(1, 2, 3, 4);

  for (int i = 0; i < r.size(); i++) {
    cout << r[i] << '\n';
  }
  return 0;
}